/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/27 20:47:02 by mhotting         ###   ########.fr       */
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
    Intern i0;

    i0.makeForm("test", "test");

    return 0;
}
