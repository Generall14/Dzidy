#define LIN
// #define AUTODYNAMIC

#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "myLib.hpp"

#ifdef LIN
// g++ -ldl main.cpp
#include <dlfcn.h>
#endif

#ifdef AUTODYNAMIC
// g++ ./myLib.so main.cpp 
#endif

using namespace std;

int main()
{
#ifdef LIN
	void *handle;
	
	MyLib* (*makeMyLib)();
	void (*destroyMyLib)(MyLib*);
	
    char *error;
    handle = dlopen("./myLib.so", RTLD_LAZY);
    if (!handle) 
	{
		cout << "dupa " << dlerror() << endl;
        exit(1);
    }
    dlerror();    /* Clear any existing error */

	makeMyLib = (MyLib* (*)())dlsym(handle, "makeMyLib");
    if ((error = dlerror()) != NULL)  
	{
		cout << "makeMyLib error: " << error << endl;
        exit(1);
    }
    destroyMyLib = (void (*)(MyLib*))dlsym(handle, "destroyMyLib");
    if ((error = dlerror()) != NULL)  
	{
		cout << "destroyMyLib error: " << error << endl;
        exit(1);
    }
    
    
    MyLib* ml = makeMyLib();
	cout << ml->testFun(1) << endl;
	destroyMyLib(ml);
    
    
    dlclose(handle);
#endif
	
	
#ifdef AUTODYNAMIC
	MyLib mm;
	cout << mm.testFun(2) << endl;
#endif
	
	return 0;
}
