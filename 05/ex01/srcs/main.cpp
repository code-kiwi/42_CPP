/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/26 23:01:53 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    /* Test0 */
    std::cout << "TEST0" << std::endl;
    try {
        Form f0("Politics", 10, 10);
        std::cout << f0 << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test1 */
    std::cout << "TEST1" << std::endl;
    try {
        Form f1("Politics", 151, 10);
        std::cout << f1 << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test2 */
    std::cout << "TEST2" << std::endl;
    try {
        Form f2("Politics", 150, 151);
        std::cout << f2 << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test3 */
    std::cout << "TEST3" << std::endl;
    try {
        Form f3("Politics", 0, 150);
        std::cout << f3 << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test4 */
    std::cout << "TEST4" << std::endl;
    try {
        Form f4("Politics", 150, 0);
        std::cout << f4 << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test5 */
    std::cout << "TEST5" << std::endl;
    try {
        Form f5("Politics", 100, 100);
        Bureaucrat b0("Bill", 90);
        Bureaucrat b1("Roger", 101);
        Bureaucrat b2("Tom", 2);
        std::cout << std::endl;
        std::cout << f5 << std::endl;
        std::cout << b0 << std::endl;
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << std::endl;
        b1.signForm(f5);
        std::cout << f5 << std::endl;
        b2.signForm(f5);
        std::cout << f5 << std::endl;
        b0.signForm(f5);
        std::cout << f5 << std::endl;
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test5 */
    std::cout << "TEST5" << std::endl;
    try {
        Form f6("Green IT", 10, 1);
        Bureaucrat b3("Linda", 15);
        std::cout << std::endl;
        std::cout << f6 << std::endl;
        std::cout << b3 << std::endl;
        std::cout << std::endl;
        b3.signForm(f6);
        std::cout << f6 << std::endl;
        std::cout << std::endl;
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        b3.incrementGrade();
        std::cout << b3 << std::endl;
        b3.signForm(f6);
        std::cout << f6 << std::endl;
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    return 0;
}
