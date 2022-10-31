using namespace std;
#include <string>
#include <sstream>
#include <iostream>
template <class T>
std::string to_string(T t, std::ios_base & (*f)(std::ios_base&))
{
    std::ostringstream oss;
    oss << f << t;
                return oss.str();
}
int main()
{
                // the second parameter of to_string() should be one of
                // std::hex, std::dec or std::oct
    std::cout<<to_string<long>(123456, std::hex)<<std::endl;
    std::cout<<to_string<long>(123456, std::oct)<<std::endl;
                return 0;
}