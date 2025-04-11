/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/11 22:17:45 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    /* Test0 */
    std::cout << "TEST0" << std::endl;
    try {
        ShrubberyCreationForm s0("Home");
        std::cout << s0 << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=========================" << std::endl;

    return 0;
}
