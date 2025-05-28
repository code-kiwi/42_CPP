/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/28 02:21:44 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {
    // /* Test0 */
    // std::cout << "=========================" << std::endl;
    // std::cout << "TEST0" << std::endl;
    // try {
    //     ShrubberyCreationForm s0("Home7");
    //     ShrubberyCreationForm s1;
    //     Bureaucrat b0("Tiffany", 135);
    //     std::cout << std::endl;
    //     std::cout << s0 << std::endl;
    //     std::cout << s1 << std::endl;
    //     std::cout << b0 << std::endl;
    //     std::cout << std::endl;
    //     try {
    //         b0.signForm(s0);
    //         b0.executeForm(s0);
    //     } catch (std::exception& e) {
    //         std::cout << "Form sign/execution failed because: " << e.what() << std::endl;
    //     }
    //     std::cout << std::endl;
    // } catch (std::exception& e) {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << "=========================" << std::endl;

    /* Test 0 */
    std::cout << "=========================" << std::endl;
    std::cout << "TEST0" << std::endl;
    try {
        Intern i0;
        AForm* formPtr0;
        AForm* formPtr1;
        AForm* formPtr2;
        AForm* formPtr3;
        Bureaucrat b0("Stacy", 45);
        std::cout << std::endl;

        std::cout << b0 << std::endl;
        std::cout << std::endl;

        formPtr0 = i0.makeForm("test", "test");
        formPtr1 = i0.makeForm("shrubbery", "garden");
        formPtr2 = i0.makeForm("robotomy", "Alex");
        formPtr3 = i0.makeForm("presidential", "Carlos");
        std::cout << std::endl;

        std::cout << formPtr0 << std::endl;
        std::cout << *formPtr1 << std::endl;
        std::cout << *formPtr2 << std::endl;
        std::cout << *formPtr3 << std::endl;
        std::cout << std::endl;

        b0.signForm(*formPtr1);
        b0.executeForm(*formPtr1);
        std::cout << std::endl;

        b0.signForm(*formPtr2);
        b0.executeForm(*formPtr2);
        std::cout << std::endl;

        b0.signForm(*formPtr3);
        b0.executeForm(*formPtr3);
        std::cout << std::endl;
        
        delete formPtr1;
        delete formPtr2;
        delete formPtr3;
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "Main failed: " << e.what() << std::endl;
    }

    return 0;
}
