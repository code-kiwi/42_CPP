/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:11:46 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 08:27:35 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {
    std::cout << "Dog default Constructor called." << std::endl;
}

Dog::Dog(const Dog& otherDog): Animal(otherDog) {
    std::cout << "Dog copy Constructor called." << std::endl;
}

Dog::~Dog(void) {
    std::cout << "Dog Destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& otherDog) {
    std::cout << "Dog assignment operator called." << std::endl;
    if (this != &otherDog) {
        Animal::operator=(otherDog);
    }
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "The Dog is barking: WOOF WOOF." << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Dog& dog) {
    o << "Dog of type: " << dog.getType();
    return o;
}
