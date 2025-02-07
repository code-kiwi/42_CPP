/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:51:54 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/07 18:41:34 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void) {
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point inside(5, 5);
    Point outside(10, 10);
    Point onEdge(5, 0);

    std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "On Edge: " << bsp(a, b, c, onEdge) << std::endl;

    return 0;
}
