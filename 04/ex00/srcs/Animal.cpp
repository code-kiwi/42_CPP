/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:11:46 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 08:26:54 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Undefined") {
    std::cout << "Animal default Constructor called." << std::endl;
}

Animal::Animal(const std::string& type): _type(type) {
    std::cout << "Animal type string Constructor called." << std::endl;
}

Animal::Animal(const Animal& otherAnimal): _type(otherAnimal._type) {
    std::cout << "Animal copy Constructor called." << std::endl;
}

Animal::~Animal(void) {
    std::cout << "Animal Destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& otherAnimal) {
    std::cout << "Animal assignment operator called." << std::endl;
    if (this != &otherAnimal) {
        this->_type = otherAnimal._type;
    }
    return *this;
}

void Animal::makeSound(void) const {
    std::cout << "The Animal makes a weird sound. It doesn't really know what kind of animal it is." << std::endl;
}

const std::string& Animal::getType(void) const {
    return this->_type;
}

std::ostream& operator<<(std::ostream& o, const Animal& animal) {
    o << "Animal of type: " << animal.getType();
    return o;
}
