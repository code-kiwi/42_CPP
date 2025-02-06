/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:51:57 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/06 01:01:25 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int Fixed::_numBits = 8;

Fixed::Fixed(void) : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f) {
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed(const int num) : _rawBits(num << Fixed::_numBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _rawBits(roundf(num * (1 << Fixed::_numBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f) {
        this->setRawBits(f.getRawBits());
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}

void Fixed::setRawBits(const int raw) {
    this->_rawBits = raw;
}

float Fixed::toFloat(void) const {
    return (float) this->_rawBits / (1 << Fixed::_numBits);
}

int Fixed::toInt(void) const {
    return this->_rawBits >> Fixed::_numBits;
}

std::ostream& operator<<(std::ostream& o, const Fixed& f) {
    o << f.toFloat();
    return o;
}
