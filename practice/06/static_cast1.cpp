#include <iostream>

int main(void) {
    int a = 42;

    double b = a;
    int c = b;
    int d = static_cast<int>(b); // C++ way to cast

    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    
    return 0;
}