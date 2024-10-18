/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:13:08 by codekiwi          #+#    #+#             */
/*   Updated: 2024/10/18 14:47:23 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(const Fixed& f) {
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed(const int n) : _value(n << _numBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _numBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(const Fixed& f) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f) {
        this->setRawBits(f.getRawBits());
    }
    return (*this);
}

int		Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void	Fixed::setRawBits(const int raw) {
    _value = raw;
}

int		Fixed::toInt(void) const {
    return (_value >> _numBits);
}

float	Fixed::toFloat(void) const {
    return ((float) _value / (1 << _numBits));
}

const int   Fixed::_numBits = 8;

std::ostream&	operator<<(std::ostream& o, const Fixed& f) {
    o << f.toFloat();
    return (o);
}
