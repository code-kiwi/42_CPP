#include <iostream>

class Foo
{
private:
    float _v;

public:
    Foo(const float v) : _v(v) {};

    float getV(void) const { return this->_v; }
    operator float() { return this->_v; } // see key word explicit since CPP11 (forces explicit casts)
    operator int() { return static_cast<int>(this->_v); }
};

int main(void)
{
    Foo a(42.42);
    float b = static_cast<float>(a);
    int c = static_cast<int>(a);

    std::cout << a.getV() << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}