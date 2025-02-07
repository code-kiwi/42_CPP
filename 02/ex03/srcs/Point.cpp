/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:45:05 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/07 17:54:51 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2) {}

Point::Point(const Point& p) : _x(p.getX()), _y(p.getY()) {}

Point::Point(const Fixed& f1, const Fixed& f2): _x(f1), _y(f2) {}

Point::~Point(void) {}

Point& Point::operator=(const Point& p) {
    if (this != &p) {
        // Does nothing because _x and _y are const
    }
    return *this;
}

Point Point::operator-(const Point& p) const {
    return Point(this->getX() - p.getX(), this->getY() - p.getY());
}

const Fixed Point::getX(void) const {
    return this->_x;
}

const Fixed Point::getY(void) const {
    return this->_y;
}

Point Point::getVector(const Point& p1, const Point& p2) {
    return (p2 - p1);
}

Fixed Point::crossProduct(const Point& p1, const Point& p2) {
    return p1.getX() * p2.getY() - p1.getY() * p2.getX();
}