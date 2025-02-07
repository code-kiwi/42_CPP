/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:15:16 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/07 18:43:07 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point p) {
    Fixed cp1(Point::crossProduct(Point::getVector(a, b), Point::getVector(a, p)));
    Fixed cp2(Point::crossProduct(Point::getVector(b, c), Point::getVector(b, p)));
    Fixed cp3(Point::crossProduct(Point::getVector(c, a), Point::getVector(c, p)));
    return (cp1 < 0 && cp2 < 0 && cp3 < 0) || (cp1 > 0 && cp2 > 0 && cp3 > 0);
}
