/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:12:05 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 05:18:59 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& otherIce): AMateria(otherIce) {
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void) {
    std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& otherIce) {
    std::cout << "Ice assignment operator called" << std::endl;
    if (this != &otherIce) {
        AMateria::operator=(otherIce);
    }
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
