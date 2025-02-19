/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 11:39:11 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap ct1("Bob");
    ClapTrap ct2("John");
    ClapTrap ct3(ct2);
    ClapTrap ct4;

    std::cout << std::endl;
    std::cout << ct1 << std::endl;
    std::cout << ct2 << std::endl;
    std::cout << ct3 << std::endl;
    std::cout << ct4 << std::endl;
    
    std::cout << std::endl;
    ct1.attack("John");
    std::cout << ct1 << std::endl;

    ct1.attack("John");
    ct1.attack("John");
    ct1.attack("John");
    ct1.attack("John");
    ct1.attack("John");
    ct1.attack("John");
    ct1.attack("John");
    ct1.attack("John");
    ct1.attack("John");
    ct1.attack("John");
    std::cout << ct1 << std::endl;

    std::cout << std::endl;
    ct2.takeDamage(5);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(10);
    std::cout << ct2 << std::endl;
    ct2.takeDamage(20);
    std::cout << ct2 << std::endl;
    ct2.beRepaired(10);
    ct2.attack("Bob");

    std::cout << std::endl;
    ct2 = ct3;
    std::cout << ct2 << std::endl;
    ct2.beRepaired(std::numeric_limits<unsigned int>::max());
    std::cout << ct2 << std::endl;
    ct2.beRepaired(std::numeric_limits<unsigned int>::max());
    std::cout << ct2 << std::endl;

    std::cout << std::endl;
    return 0;
}
