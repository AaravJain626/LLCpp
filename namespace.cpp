#include <iostream>
#include <cstdlib>
namespace lnprint{
    void print(const std::string& text)
    {
        std::cout << text;
    }   
}
using lnprint::print;

int main()
{
    print("Hello World");
    return EXIT_SUCCESS;
}
