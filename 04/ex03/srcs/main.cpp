/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 04:28:27 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 15:56:47 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void) {
    // Basic tests of Character class
    {
        Character* char1 = new Character("Bob");
        Character* char2 = new Character("Jenny");
        Character* char3;
        AMateria* ice1 = new Ice();
        AMateria* cure1 = new Cure();
        AMateria* ice2 = new Ice();
        AMateria* cure2 = new Cure();
        AMateria* ice3 = new Ice();
        AMateria* cure3 = new Cure();

        std::cout << std::endl;
        std::cout << *char1 << std::endl;

        std::cout << std::endl;
        char1->equip(ice1);
        std::cout << *char1 << std::endl;
        char1->equip(ice2);
        char1->equip(ice3);
        char1->equip(cure1);
        std::cout << *char1 << std::endl;
        char1->equip(cure2);
        char1->equip(cure3);

        std::cout << std::endl;
        char1->unequip(0);
        char1->unequip(3);
        std::cout << *char1 << std::endl;
        char1->unequip(2);
        std::cout << *char1 << std::endl;

        std::cout << std::endl;
        char3 = new Character(*char1);
        std::cout << *char3 << std::endl;
        char3->equip(cure1);
        char3->equip(cure2);
        char1->equip(cure3);
        char1->equip(ice1);
        std::cout << *char1 << std::endl;
        std::cout << *char3 << std::endl;

        std::cout << std::endl;
        char1->use(0, *char2);
        char2->use(2, *char1);
        char1->use(3, *char2);
        char1->use(10, *char2);
        char3->use(2, *char1);

        std::cout << std::endl;
        std::cout << *char2 << std::endl;
        *char2 = *char3;
        std::cout << *char2 << std::endl;

        std::cout << std::endl;
        delete char1;
        delete char2;
        delete char3;
    }
    
    return 0;
}