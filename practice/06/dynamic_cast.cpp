#include <iostream>

class Animal {
    public:
        virtual ~Animal(void) {}
};

class Cat: public Animal {
    public:
        void meow() { std::cout << "Meow !" << std::endl; }
};

class Dog: public Animal {
    public:
        void bark() { std::cout << "Woof !" << std::endl; }
};

int main(void) {
    Animal* animal = new Cat();
    Animal* animal2 = new Dog();

    Cat* cat = dynamic_cast<Cat*>(animal);
    if (cat == 0) {
        std::cout << "First cast failed" << std::endl;
    } else {
        std::cout << "First cast succeeded" << std::endl;
        cat->meow();
    }
    Cat* dog = dynamic_cast<Cat*>(animal2);
    if (dog == 0) {
        std::cout << "Second cast failed" << std::endl;
    } else {
        std::cout << "Second cast succeeded" << std::endl;
        dog->meow();
    }

    delete animal;
    delete animal2;
    return 0;
}

/*
    NOTES:
    - dynamic cast happens during execution (and not compilation like static cast)
    - needs one virtual method
        -> RTTI (Run-Time Type Information) have to be enabled, which means that the type
        will be evaluated during the runtime and not the compilation (which happens with one virtual method)
    - only works with polymorphic inheritence
    => enables the user to make sure that a data is "castable" during the runtime;
*/