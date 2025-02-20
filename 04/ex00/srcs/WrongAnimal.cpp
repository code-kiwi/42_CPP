/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:11:46 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 22:57:22 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("Undefined") {
    std::cout << "WrongAnimal default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type): _type(type) {
    std::cout << "WrongAnimal type string Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& otherWrongAnimal): _type(otherWrongAnimal._type) {
    std::cout << "WrongAnimal copy Constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal Destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& otherWrongAnimal) {
    std::cout << "WrongAnimal assignment operator called." << std::endl;
    if (this != &otherWrongAnimal) {
        this->_type = otherWrongAnimal._type;
    }
    return *this;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "The WrongAnimal makes a weird sound. It doesn't really know what kind of wrongAnimal it is." << std::endl;
}

const std::string& WrongAnimal::getType(void) const {
    return this->_type;
}

std::ostream& operator<<(std::ostream& o, const WrongAnimal& wrongAnimal) {
    std::cout << "WrongAnimal of type: " << wrongAnimal.getType();
    return o;
}
