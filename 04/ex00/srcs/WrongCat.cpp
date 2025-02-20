/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:11:46 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 23:00:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {
    std::cout << "WrongCat default Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& otherWrongCat): WrongAnimal(otherWrongCat) {
    std::cout << "WrongCat copy Constructor called." << std::endl;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat Destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& otherWrongCat) {
    std::cout << "WrongCat assignment operator called." << std::endl;
    if (this != &otherWrongCat) {
        WrongAnimal::operator=(otherWrongCat);
    }
    return *this;
}

void WrongCat::makeSound(void) const {
    std::cout << "The WrongCat says MEOOOOOOOW." << std::endl;
}

std::ostream& operator<<(std::ostream& o, const WrongCat& wrongCat) {
    std::cout << "WrongCat of type: " << wrongCat.getType();
    return o;
}
