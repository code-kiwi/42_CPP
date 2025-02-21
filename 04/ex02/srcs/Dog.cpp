/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:11:46 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 03:36:04 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): AAnimal("Dog"), _brain(new Brain()) {
    std::cout << "Dog default Constructor called." << std::endl;
}

Dog::Dog(const Dog& otherDog): AAnimal(otherDog), _brain(new Brain(*otherDog._brain)) {
    std::cout << "Dog copy Constructor called." << std::endl;
}

Dog::~Dog(void) {
    std::cout << "Dog Destructor called." << std::endl;
    delete this->_brain;
}

Dog& Dog::operator=(const Dog& otherDog) {
    std::cout << "Dog assignment operator called." << std::endl;
    if (this != &otherDog) {
        AAnimal::operator=(otherDog);
        delete this->_brain;
        this->_brain = new Brain(*otherDog._brain);
    }
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "The Dog is barking: WOOF WOOF." << std::endl;
}

Brain* Dog::getBrain(void) const {
    return this->_brain;
}

std::ostream& operator<<(std::ostream& o, const Dog& dog) {
    std::cout << "Dog of type: " << dog.getType();
    return o;
}
