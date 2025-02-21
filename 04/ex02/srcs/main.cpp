/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 03:57:59 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {
    AAnimal* cat = new Cat();
    Cat* catPtr = (Cat*) cat;
    AAnimal* dog = new Dog();
    Brain* brain = NULL;

    std::cout << std::endl;
    cat->makeSound();
    dog->makeSound();

    std::cout << std::endl;
    brain = catPtr->getBrain();
    brain->setAllIdeas("Meow!");
    for (size_t i = 0; i < 5; i++) {
        std::cout << "Cat's idea #" << i << ": " << brain->getAllIdeas()[i] << std::endl;
    }

    std::cout << std::endl;
    brain->setIdea("Woof...", 0);
    for (size_t i = 0; i < 5; i++) {
        std::cout << "Cat's idea #" << i << ": " << brain->getAllIdeas()[i] << std::endl;
    }
    
    std::cout << std::endl;
    delete cat;
    delete dog;
    
    return 0;
}
