#include <iostream>
#include <any>
#include <variant>
#include <exception>

using namespace std;

int main()
{
    try
    {
        std::any a = 1;
        std::cout << a.type().name() << ": " << std::any_cast<int>(a) << '\n';
        a = 3.14;
        std::cout << a.type().name() << ": " << std::any_cast<double>(a) << '\n';
        a = true;
        std::cout << a.type().name() << ": " << std::any_cast<bool>(a) << '\n';
        
        std::variant<int, float> v, w;
        v = 12;
        int i = std::get<int>(v);
        v=float(6.66);
        float f = std::get<float>(v);
        //i = std::get<int>(v);
    } catch (std::exception e)
    {
        cout << "throwed " << e.what() << endl;
    }
    return 0;
}
