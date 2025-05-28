#include <iostream>

class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};
class Unrelated {};

int main(void) {
    Child1 a;

    Parent* b = &a;
    // Child1* c = b; // Implicit cast forbidden
    Child2* d = static_cast<Child2 *>(b);

    // Unrelated* e = static_cast<Unrelated*>(&a); // Explicit cast but non-related types => forbidden
    return 0;
}