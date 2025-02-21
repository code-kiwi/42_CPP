/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:12:05 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 05:22:04 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& otherCure): AMateria(otherCure) {
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void) {
    std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& otherCure) {
    std::cout << "Cure assignment operator called" << std::endl;
    if (this != &otherCure) {
        AMateria::operator=(otherCure);
    }
    return *this;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
