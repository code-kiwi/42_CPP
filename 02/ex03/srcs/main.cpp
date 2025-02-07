/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:51:54 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/07 18:33:42 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void) {
    Point A(0.0f, 0.0f), B(3.0f, 3.0f), C(6.0f, 0.0f), P(2.0f, 1.0f);

    if (bsp(A, B, C, P)) {
        std::cout << "P is into ABC" << std::endl;
    } else {
        std::cout << "P is not into ABC" << std::endl;
    }
    return 0;
}
