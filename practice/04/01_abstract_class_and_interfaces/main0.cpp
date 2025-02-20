/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:53:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 19:11:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter
{
public:
    virtual void attack(const std::string &target) = 0;
    void sayHello(const std::string &target);
};

class Warrior : public ACharacter
{
public:
    virtual void attack(const std::string &target);
};

void ACharacter::sayHello(const std::string &target)
{
    std::cout << "Character says hello to " << target << std::endl;
}

void Warrior::attack(const std::string &target)
{
    std::cout << "Warrior attacks " << target << " and kills everybody around, just for fun" << std::endl;
}

class IWaterSource
{
};

class ICoffee
{
};

class ICoffeeMaker
{
public:
    virtual void fillWaterTank(IWaterSource *src) = 0;
    virtual ICoffee *makeCoffee(const std::string &type) = 0;
};

int main(void)
{
    ACharacter *a = new Warrior();

    a->sayHello("Bob");
    a->attack("CaptainBob");

    delete a;
    return 0;
}

/*
    NOTES:
        - We use a prefix "A" in order to specify that our class is abstract (just a convention)
        - An abstract class cannot be intanciated
        - When we use = 0, we declare an abstract member function
        - The child classes have to implement the abstract functions in order to be instanciable (does this word even exist?)
        - A PURE METHOD
        - When all the member function are virtual, the class is called INTERACE (convention: prefix with I)
        - An INTERFACE has NO ATTRIBUTE!
        - When we have an abstract function, it has to have "virtual" and " = 0" configuration
        => Interface is not a real C++ concept, it is something we use, but it is not a native type of class like it would be in Java or PHP
*/
