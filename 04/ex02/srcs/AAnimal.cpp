/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:11:46 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 03:39:47 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): _type("Undefined") {
    std::cout << "AAnimal default Constructor called." << std::endl;
}

AAnimal::AAnimal(const std::string& type): _type(type) {
    std::cout << "AAnimal type string Constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& otherAAnimal): _type(otherAAnimal._type) {
    std::cout << "AAnimal copy Constructor called." << std::endl;
}

AAnimal::~AAnimal(void) {
    std::cout << "AAnimal Destructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& otherAAnimal) {
    std::cout << "AAnimal assignment operator called." << std::endl;
    if (this != &otherAAnimal) {
        this->_type = otherAAnimal._type;
    }
    return *this;
}

const std::string& AAnimal::getType(void) const {
    return this->_type;
}
