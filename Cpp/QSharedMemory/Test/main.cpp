#include <QCoreApplication>
#include <QDebug>
#include <QSharedMemory>
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Tworzę obiekt shared memory" << std::endl;
    QSharedMemory sm("yyy");
    if(sm.attach())
    {
        std::cout << "Pamięć zarezerwowana: " << sm.size() << std::endl;
        sm.lock();
        char* buf = (char*)sm.data();
        std::cout << "Odczytałem \"" << buf << "\" z pamięci współdzielonej" << std::endl;
        sm.unlock();
        sm.detach();
    }
    else
    {
        std::cout << "Obiekt pusty, rezerwuje" << std::endl;
        sm.create(100);
        sm.lock();
        char* buf = (char*)sm.data();
        std::cout << "Podaj dane: ";
        char idata[100];
        std::cin >> idata;
        std::cout << "Wpisuje \"" << idata << "\" do pamięci współdzielonej" << std::endl;
        memcpy(buf, idata, 100);
        sm.unlock();
    }
    char a;
    std::cin >> a;
}
