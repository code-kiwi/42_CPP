#include <iostream>

int main(void) {
    int a = 42;

    const int* b = &a;
    // int* c = b; // Forbidden
    int* d = const_cast<int*>(b);

    std::cout << "a: " << a << std::endl;

    return 0;
}

// int main(void) {
//     const int a = 42;

//     const int* b = &a;
//     // int* c = b; // Forbidden
//     int* d = const_cast<int*>(b);

//     std::cout << "a: " << a << std::endl;
//     *d = 21;
//     std::cout << "a: " << a << std::endl;

//     return 0;
// }

/*
    Notes:
    - we can remove the const from a pointer using const_cast, but, in order to change
    the pointed value, the original variable should not be declared as const
    - modifying a const (even with a trick) is always an Undefined Behavior;
*/