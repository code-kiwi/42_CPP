/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 01:52:27 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    // Testing the normal classes
    {
        Animal *animal = new Animal();
        Animal *cat = new Cat();
        Animal *dog = new Dog();

        std::cout << std::endl;
        animal->makeSound();
        cat->makeSound();
        dog->makeSound();

        std::cout << std::endl;
        std::cout << animal->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
        std::cout << dog->getType() << " " << std::endl;

        std::cout << std::endl;
        std::cout << *animal << std::endl;
        std::cout << *cat << std::endl;
        std::cout << *dog << std::endl;

        std::cout << std::endl;
        delete animal;
        delete cat;
        delete dog;
    }
    
    std::cout << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Testing the wrong classes
    {
        WrongAnimal *wrongAnimal = new WrongAnimal();
        WrongAnimal *wrongCat = new WrongCat();
        WrongCat *wrongCat2 = new WrongCat();

        std::cout << std::endl;
        wrongAnimal->makeSound();
        wrongCat->makeSound();
        wrongCat2->makeSound();

        std::cout << std::endl;
        std::cout << wrongAnimal->getType() << " " << std::endl;
        std::cout << wrongCat->getType() << " " << std::endl;
        std::cout << wrongCat2->getType() << " " << std::endl;

        std::cout << std::endl;
        std::cout << *wrongAnimal << std::endl;
        std::cout << *wrongCat << std::endl;
        std::cout << *wrongCat2 << std::endl;

        std::cout << std::endl;
        delete wrongAnimal;
        delete wrongCat;
        delete wrongCat2;
    }
    
    return 0;
}
