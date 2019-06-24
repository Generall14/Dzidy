//Dokładny opis w "Thinking in c++ t.2", str. 162.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float f = 123.4567890123;
	int i = 666;
	std::string s = "String testowy";
	cout << "Testy manipulatorów std::cout" << endl;
	cout << "Ustawienia domyślne:\nint i = " << i << "\nfloat f = " << f << "\nstring s = " << s << endl << endl; 
	
	cout << "cout << hex << i << endl << oct << i << endl << dec << i << endl;:\n";
	cout << hex << i << endl << oct << i << endl << dec << i << endl << endl;
	
	cout << "plus flagi: cout << setiosflags(ios::unitbuf | ios::showbase | ios::uppercase | ios::showpos);:\n";
	cout << setiosflags(ios::unitbuf | ios::showbase | ios::uppercase | ios::showpos);
	cout << hex << i << endl << oct << i << endl << dec << i << endl << endl;
	
	cout << "cout.setf(ios::left, ios::adjustfield);\ncout << resetiosflags(ios::showbase) << dec << setfill('_');\ncout << setw(20) << i << endl;:\n";
	cout.setf(ios::left, ios::adjustfield);
	cout << resetiosflags(ios::showbase) << dec << setfill('_');
	cout << setw(20) << i << endl << endl;
	
	cout << "cout.setf(ios::right, ios::adjustfield);\ncout << setw(20) << i << endl;:\n";
	cout.setf(ios::right, ios::adjustfield);
	cout << setw(20) << i << endl << endl;
	
	cout << "cout.setf(ios::internal, ios::adjustfield);\ncout << setw(20) << i << endl;:\n";
	cout.setf(ios::internal, ios::adjustfield);
	cout << setw(20) << i << endl << endl;

	cout << resetiosflags(ios::showpos) << setiosflags(ios::showpoint);
	cout << "float: " << f << ", dokładność: " << cout.precision() << endl;
	
	cout.setf(ios::scientific, ios::floatfield);
	cout << "cout.setf(ios::scientific, ios::floatfield) << f;:\n";
	cout << f << resetiosflags(ios::uppercase) << endl << endl;
	
	cout << "cout.setf(ios::fixed, ios::floatfield);:\n";
	cout.setf(ios::fixed, ios::floatfield);
	cout << f << endl << endl;
	
	cout << "cout << setprecision(15) << endl;\n";
	cout << setprecision(15);
	cout << f << endl << endl;
	
	cout << "cout.setf(ios::scientific, ios::floatfield);:\n";
	cout.setf(ios::scientific, ios::floatfield);
	cout << f << endl << endl;
	
	cout << "cout << setw(20) << s << endl;:\n";
	cout << setw(20) << s << endl << endl;
	
	return 0;
}