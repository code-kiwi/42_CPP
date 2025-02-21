/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 04:46:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 05:06:20 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"

AMateria::AMateria(void): _type("Undefined") {
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type): _type(type) {
    std::cout << "AMateria string constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& otherAMateria): _type(otherAMateria._type) {
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria(void) {
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& otherAMateria) {
    std::cout << "AMateria assignment operator called" << std::endl;
    if (this != &otherAMateria) {
        this->_type = otherAMateria._type;
    }
    return *this;
}

const std::string& AMateria::getType() const {
    return this->_type;
}
