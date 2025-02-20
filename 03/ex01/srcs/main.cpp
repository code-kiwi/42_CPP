/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 19:28:37 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap st1("Bob");
    ScavTrap st2;
    ScavTrap st3(st2);

    std::cout << std::endl;
    std::cout << st1 << std::endl;
    std::cout << st2 << std::endl;
    std::cout << st3 << std::endl;

    std::cout << std::endl;
    st1.attack("John F. Kennedy");
    st1.attack("George H.W. Bush");
    st1.attack("Chester A. Arthur");
    std::cout << st1 << std::endl;

    std::cout << std::endl;
    st1.takeDamage(20);
    st1.takeDamage(200);
    std::cout << st1 << std::endl;
    st1.attack("Donald Trump");

    std::cout << std::endl;
    st1.beRepaired(100);
    st1 = st2;
    std::cout << st1 << std::endl;
    st1.beRepaired(100);
    std::cout << st1 << std::endl;

    std::cout << std::endl;
    st1.guardGate();
    st1.takeDamage(200);
    st1.guardGate();

    std::cout << std::endl;
    return 0;
}
