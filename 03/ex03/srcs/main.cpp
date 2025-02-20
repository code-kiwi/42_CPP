/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 19:28:00 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap dt1;
    DiamondTrap dt2("NeilDiamond");
    DiamondTrap dt3(dt2);

    std::cout << std::endl;
    std::cout << dt1 << std::endl;
    std::cout << dt2 << std::endl;
    std::cout << dt3 << std::endl;

    std::cout << std::endl;
    dt1.whoAmI();
    dt2.whoAmI();
    dt3.whoAmI();

    std::cout << std::endl;
    dt2.guardGate();
    dt2.highFivesGuys();

    std::cout << std::endl;
    dt2.attack("B. Clinton");
    std::cout << dt2 << std::endl;

    std::cout << std::endl;
    dt2.takeDamage(20);
    dt2.takeDamage(200);
    std::cout << dt2 << std::endl;
    dt2.attack("M. Lewinsky");

    std::cout << std::endl;
    dt2.beRepaired(100);
    dt2 = dt1;
    std::cout << dt2 << std::endl;
    dt2.beRepaired(100);
    std::cout << dt2 << std::endl;

    std::cout << std::endl;
    return 0;
}
