/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:39:20 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/10 20:39:19 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal {
    private:
        int _numberOfLegs;

    public:
    Animal(void);
    Animal(const Animal& animal);
    Animal& operator=(const Animal& animal);
    ~Animal(void);

    void run(int distance);
};

class Cat: public Animal {
    public:
        Cat(void);
        Cat(const Cat& cat);
        Cat& operator=(const Cat& cat);
        ~Cat(void);

        void scornSomeone(const std::string& target);
};

class Pony: public Animal {
    public:
        Pony(void);
        Pony(const Pony& pony);
        Pony& operator=(const Pony& pony);
        ~Pony(void);

        void doMagic(const std::string& target);
};

int main(void) {
    std::cout << "TEST" << std::endl;
    return 0;
}