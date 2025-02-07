/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:44:45 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/07 17:53:24 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        const Fixed _x;
        const Fixed _y;

    public:
        Point(void);
        Point(const float f1, const float f2);
        Point(const Point& p);
        Point(const Fixed& f1, const Fixed& f2);

        ~Point(void);

        Point& operator=(const Point& p);
        Point operator-(const Point& p) const;

        const Fixed getX(void) const;
        const Fixed getY(void) const;

        static Point getVector(const Point& p1, const Point& p2);
        static Fixed crossProduct(const Point& p1, const Point& p2);
};

#endif
