#include <iostream>
#include <tuple>

using namespace std;

// Łopatologiczne rozwijanie, po stałych indeksach i znanych typach.
template<typename ... Args>
void fun(Args ... args)
{
    cout << "Liczba parametrów: " << sizeof...(args) << endl;
   
    tuple<Args...> d{args ...};
    cout << string(std::get<0>(d)) << endl;
    cout << string(std::get<1>(d)) << endl;
    cout << string(std::get<2>(d)) << endl;
   
    string a, b, c;
    tie(a, b, c) = d;
    cout << a << " " << b << " " << c << endl;
}

// Rekurencyjne rozwijanie, wymagany terminator który przerwie rekurencje.
void fun2(){}
template<typename Arg, typename ... Others>
void fun2(Arg arg, Others ... others)
{
    cout << arg << endl;
    fun2(others...);
}

int main()
{
    fun("1", "d", "fd");
    fun2(1u, 4.4f, "fd");
}
