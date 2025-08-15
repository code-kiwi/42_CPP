/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/15 23:02:20 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void) {
    // Custom tests
    {
        int a = 1, b = 0, c = 2, d = 0;

        // Swap
        std::cout << "SWAP" << std::endl;
        std::cout << "a : " << a << ", b : " << b << std::endl;
        swap<int>(a, b);
        std::cout << "a : " << a << ", b : " << b << std::endl;
        swap<int>(a, b);
        std::cout << std::endl << "*************************" << std::endl;

        // Min
        std::cout << "MIN" << std::endl;
        std::cout << "a : " << a << ", b : " << b << ", c : " << c << ", d : " << d << std::endl;
        std::cout << "min(a, b) = " << min<int>(a, b) << std::endl;
        std::cout << "min(a, c) = " << min<int>(a, c) << std::endl;
        std::cout << "min(b, c) = " << min<int>(b, c) << std::endl;
        std::cout << std::endl << "*************************" << std::endl;

        // Max
        std::cout << "MAX" << std::endl;
        std::cout << "a : " << a << ", b : " << b << ", c : " << c << ", d : " << d << std::endl;
        std::cout << "max(a, b) = " << max<int>(a, b) << std::endl;
        std::cout << "max(a, c) = " << max<int>(a, c) << std::endl;
        std::cout << "max(b, c) = " << max<int>(b, c) << std::endl;
        std::cout << std::endl << "*************************" << std::endl;
    }

    // Recommended tests
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }

    return 0;
}
