#include <iostream>
int main()
{
    int i = 33;
    int* j = &i;
    std::cout << "ptr of  i " << j << std::endl;
    long long k = 73;
    long long* l = &k;
    std::cout << "ptr of k " << l << std::endl;
    float pi = 3.1415;
    float* piPtr = &pi;
    std::cout << "ptr of pi " << piPtr << std::endl;
    return 0;
}
