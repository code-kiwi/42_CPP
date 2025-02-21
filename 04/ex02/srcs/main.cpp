/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 03:38:11 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {
    // Test with cats
    {
        Cat* cat = new Cat();
        AAnimal* a1 = cat;
        Brain* catBrain = cat->getBrain();
        catBrain->setAllIdeas("Cat ideas");

        Cat* cat2 = new Cat(*cat);
        AAnimal* a2 = cat2;
        Brain* catBrain2 = cat2->getBrain();
        catBrain2->setAllIdeas("Cat2 ideas");

        Cat* cat3 = new Cat();
        AAnimal* a3 = cat3;
        cat3->getBrain()->setAllIdeas("Cat3 ideas");

        std::cout << std::endl;
        std::cout << "Idea 0 of cat : " << catBrain->getAllIdeas()[0] << std::endl;
        std::cout << "Idea 0 of cat2: " << catBrain2->getAllIdeas()[0] << std::endl;
        std::cout << "Idea 0 of cat3: " << cat3->getBrain()->getAllIdeas()[0] << std::endl;

        std::cout << std::endl;
        *cat3 = *cat;
        std::cout << std::endl;
        std::cout << "Idea 0 of cat : " << catBrain->getAllIdeas()[0] << std::endl;
        std::cout << "Idea 0 of cat3: " << cat3->getBrain()->getAllIdeas()[0] << std::endl;
        
        std::cout << std::endl;
        cat3->getBrain()->setAllIdeas("Cat3 fresh ideas");
        std::cout << "Idea 0 of cat : " << catBrain->getAllIdeas()[0] << std::endl;
        std::cout << "Idea 0 of cat3: " << cat3->getBrain()->getAllIdeas()[0] << std::endl;

        std::cout << std::endl;
        delete a1;
        delete a2;
        delete a3;
    }

    std::cout << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Test with dogs
    {
        Dog* dog = new Dog();
        AAnimal* a1 = dog;
        Brain* dogBrain = dog->getBrain();
        dogBrain->setAllIdeas("Dog ideas");

        Dog* dog2 = new Dog(*dog);
        AAnimal* a2 = dog2;
        Brain* dogBrain2 = dog2->getBrain();
        dogBrain2->setAllIdeas("Dog2 ideas");

        Dog* dog3 = new Dog();
        AAnimal* a3 = dog3;
        dog3->getBrain()->setAllIdeas("Dog3 ideas");

        std::cout << std::endl;
        std::cout << "Idea 0 of dog : " << dogBrain->getAllIdeas()[0] << std::endl;
        std::cout << "Idea 0 of dog2: " << dogBrain2->getAllIdeas()[0] << std::endl;
        std::cout << "Idea 0 of dog3: " << dog3->getBrain()->getAllIdeas()[0] << std::endl;

        std::cout << std::endl;
        *dog3 = *dog;
        std::cout << std::endl;
        std::cout << "Idea 0 of dog : " << dogBrain->getAllIdeas()[0] << std::endl;
        std::cout << "Idea 0 of dog3: " << dog3->getBrain()->getAllIdeas()[0] << std::endl;
        
        std::cout << std::endl;
        dog3->getBrain()->setAllIdeas("Dog3 fresh ideas");
        std::cout << "Idea 0 of dog : " << dogBrain->getAllIdeas()[0] << std::endl;
        std::cout << "Idea 0 of dog3: " << dog3->getBrain()->getAllIdeas()[0] << std::endl;

        std::cout << std::endl;
        delete a1;
        delete a2;
        delete a3;
    }
    
    return 0;
}
