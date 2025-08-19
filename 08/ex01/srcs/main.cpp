/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/19 18:22:49 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

int main(void) {
    // TEST 1 : Basic tests
    {
        std::cout << "TEST1 :" << std::endl;
        Span span1(10);

        std::cout << span1 << std::endl;
        try {
            span1.addNumber(10);
            span1.addNumber(20);
            span1.addNumber(42);
            span1.addNumber(-99);
            span1.addNumber(-42);
            span1.addNumber(0);
            span1.addNumber(125);
            span1.addNumber(189654);
            span1.addNumber(-1456);
            span1.addNumber(-99);
            span1.addNumber(214);
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << span1 << std::endl;
        std::cout << "span1[5] = " << span1[5] << std::endl;
        try {
            std::cout << "span1[15] = " << span1[15] << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << std::endl << "********************" << std::endl;

    // TEST 2 : test of copy constructor and assignment operator
    {
        std::cout << "TEST2 :" << std::endl;
        Span span2(5);
        span2.addNumber(1);
        span2.addNumber(2);
        span2.addNumber(3);
        Span span3(span2);
        std::cout << span2 << std::endl;
        std::cout << span3 << std::endl;
        span2.addNumber(4);
        std::cout << span2 << std::endl;
        std::cout << span3 << std::endl;
        span3 = span2;
        std::cout << span2 << std::endl;
        std::cout << span3 << std::endl;
    }

    std::cout << std::endl << "********************" << std::endl;

    // TEST 3 : longestSpan
    {
        std::cout << "TEST3 :" << std::endl;
        Span span1(10);
        span1.addNumber(10);
        span1.addNumber(20);
        span1.addNumber(42);
        span1.addNumber(-99);
        span1.addNumber(-42);
        span1.addNumber(0);
        span1.addNumber(125);
        span1.addNumber(189654);
        span1.addNumber(-1456);
        span1.addNumber(-99);
        std::cout << span1 << std::endl;
        std::cout << "Longest span : " << span1.longestSpan() << std::endl;
        std::cout << std::endl;

        Span span2(3);
        std::cout << span2 << std::endl;
        try {
            std::cout << "Longest span : " << span2.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        
        span2.addNumber(-10);
        span2.addNumber(-8);
        std::cout << span2 << std::endl;
        std::cout << "Longest span : " << span2.longestSpan() << std::endl;
        std::cout << std::endl;

        Span span3(2);
        span3.addNumber(-2147483648);
        span3.addNumber(2147483647);
        std::cout << span3 << std::endl;
        std::cout << "Longest span : " << span3.longestSpan() << std::endl;
    }

    std::cout << std::endl << "********************" << std::endl;

    // TEST 4 : shortestSpan test
    {
        std::cout << "TEST4 :" << std::endl;
        Span span1(9);
        span1.addNumber(10);
        span1.addNumber(20);
        span1.addNumber(42);
        span1.addNumber(-99);
        span1.addNumber(-42);
        span1.addNumber(0);
        span1.addNumber(125);
        span1.addNumber(189654);
        span1.addNumber(-1456);
        std::cout << span1 << std::endl;
        std::cout << "Shortest span : " << span1.shortestSpan() << std::endl;
        std::cout << std::endl;

        Span span2(3);
        std::cout << span2 << std::endl;
        try {
            std::cout << "Shortest span : " << span2.shortestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        
        span2.addNumber(-10);
        span2.addNumber(-8);
        span2.addNumber(-8);
        std::cout << span2 << std::endl;
        std::cout << "Shortest span : " << span2.shortestSpan() << std::endl;
        std::cout << std::endl;

        Span span3(2);
        span3.addNumber(-2147483648);
        span3.addNumber(2147483647);
        std::cout << span3 << std::endl;
        std::cout << "Shortest span : " << span3.shortestSpan() << std::endl;
    }

    std::cout << std::endl << "********************" << std::endl;

    // TEST 5 : Given test
    {
        std::cout << "TEST5 :" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    return 0;
}
