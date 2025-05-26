/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/23 20:45:33 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    /* Test0 */
    std::cout << "=========================" << std::endl;
    std::cout << "TEST0" << std::endl;
    try {
        ShrubberyCreationForm s0("Home7");
        ShrubberyCreationForm s1;
        Bureaucrat b0("Tiffany", 135);
        std::cout << std::endl;
        std::cout << s0 << std::endl;
        std::cout << s1 << std::endl;
        std::cout << b0 << std::endl;
        std::cout << std::endl;
        try {
            b0.signForm(s0);
            b0.executeForm(s0);
        } catch (std::exception& e) {
            std::cerr << "Form sign/execution failed because: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test1 */
    std::cout << "TEST1" << std::endl;
    try {
        RobotomyRequestForm r0("Room");
        RobotomyRequestForm r1;
        Bureaucrat b0("Gina", 30);
        std::cout << std::endl;
        std::cout << r0 << std::endl;
        std::cout << r1 << std::endl;
        std::cout << b0 << std::endl;
        std::cout << std::endl;
        try {
            b0.signForm(r0);
            b0.executeForm(r0);
        } catch (std::exception& e) {
            std::cerr << "Form sign/execution failed because: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    /* Test2 */
    std::cout << "TEST2" << std::endl;
    try {
        PresidentialPardonForm p0("Bugs Bunny");
        PresidentialPardonForm p1;
        Bureaucrat b0("Jake", 5);
        std::cout << std::endl;
        std::cout << p0 << std::endl;
        std::cout << p1 << std::endl;
        std::cout << b0 << std::endl;
        std::cout << std::endl;
        try {
            b0.signForm(p0);
            b0.executeForm(p0);
        } catch (std::exception& e) {
            std::cerr << "Form sign/execution failed because: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    return 0;
}
