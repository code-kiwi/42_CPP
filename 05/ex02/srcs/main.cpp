/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/22 14:10:05 by mhotting         ###   ########.fr       */
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
    std::cout << "TEST0" << std::endl;
    try {
        ShrubberyCreationForm s0("Home");
        ShrubberyCreationForm s1;
        Bureaucrat b0("Tiffany", 137);
        std::cout << std::endl;
        std::cout << s0 << std::endl;
        std::cout << s1 << std::endl;
        std::cout << b0 << std::endl;
        std::cout << std::endl;
        try {
            s0.execute(b0);
        } catch (std::exception& e) {
            std::cerr << "Form execution failed because: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    // /* Test1 */
    // std::cout << "TEST1" << std::endl;
    // try {
    //     RobotomyRequestForm r0("Room");
    //     RobotomyRequestForm r1;
    //     Bureaucrat b0("Gina", 30);
    //     std::cout << std::endl;
    //     std::cout << r0 << std::endl;
    //     std::cout << r1 << std::endl;
    //     std::cout << b0 << std::endl;
    //     std::cout << std::endl;
    //     try {
    //         r0.execute(b0);
    //     } catch (std::exception& e) {
    //         std::cerr << "Form execution failed because: " << e.what() << std::endl;
    //     }
    //     std::cout << std::endl;
    // } catch (std::exception& e) {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << "=========================" << std::endl;

    return 0;
}
