/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/04 16:55:25 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

int main(void) {
    /* Test0 */
    std::cout << "TEST0" << std::endl;
    try {
        Bureaucrat b0("Bob", 150);
        std::cout << b0 << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test1 */
    std::cout << "TEST1" << std::endl;
    try {
        Bureaucrat b1("John", 0);
        std::cout << b1 << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test2 */
    std::cout << "TEST2" << std::endl;
    try {
        Bureaucrat b2("Danny", 155);
        std::cout << b2 << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test3 */
    std::cout << "TEST3" << std::endl;
    try {
        Bureaucrat b3("Skyler", 50);
        std::cout << b3 << std::endl;
        b3.decrementGrade();
        std::cout << b3 << std::endl;
        b3.decrementGrade();
        std::cout << b3 << std::endl;
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        std::cout << b3 << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test4 */
    std::cout << "TEST4" << std::endl;
    try {
        Bureaucrat b4("Cindy", 3);
        std::cout << b4 << std::endl;
        b4.incrementGrade();
        std::cout << b4 << std::endl;
        b4.incrementGrade();
        std::cout << b4 << std::endl;
        b4.incrementGrade();
        std::cout << b4 << std::endl;

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    return 0;
}
