/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:44:45 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/06 15:54:36 by mhotting         ###   ########.fr       */
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

        ~Point(void);

        Point& operator=(const Point& p);
};

#endif
