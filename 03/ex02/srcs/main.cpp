/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 11:39:04 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

#include "FragTrap.hpp"

int main(void) {
    FragTrap ft1("Bob");
    FragTrap ft2;
    FragTrap ft3(ft2);

    std::cout << std::endl;
    std::cout << ft1 << std::endl;
    std::cout << ft2 << std::endl;
    std::cout << ft3 << std::endl;

    std::cout << std::endl;
    ft1.attack("John F. Kennedy");
    ft1.attack("George H.W. Bush");
    ft1.attack("Chester A. Arthur");
    std::cout << ft1 << std::endl;

    std::cout << std::endl;
    ft1.takeDamage(20);
    ft1.takeDamage(200);
    std::cout << ft1 << std::endl;
    ft1.attack("Donald Trump");

    std::cout << std::endl;
    ft1.beRepaired(100);
    ft1 = ft2;
    std::cout << ft1 << std::endl;
    ft1.beRepaired(100);
    std::cout << ft1 << std::endl;

    std::cout << std::endl;
    ft1.highFivesGuys();
    ft1.takeDamage(200);
    ft1.highFivesGuys();

    std::cout << std::endl;
    return 0;
}
