/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:15:16 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/07 18:25:27 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point) {
    Fixed cp1(Point::crossProduct(Point::getVector(a, b), Point::getVector(a, point)));
    Fixed cp2(Point::crossProduct(Point::getVector(b, c), Point::getVector(b, point)));
    Fixed cp3(Point::crossProduct(Point::getVector(c, a), Point::getVector(c, point)));
    return (cp1 < 0 && cp2 < 0 && cp3 < 0) || (cp1 > 0 && cp2 > 0 && cp3 > 0);
}