/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 04:28:27 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 19:09:57 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

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

    // Other tests for MaterialSource
    {
        IMateriaSource* matSrc = new MateriaSource();
        MateriaSource* matSrcPtr = (MateriaSource*) matSrc;

        std::cout << std::endl;
        std::cout << *matSrcPtr << std::endl;

        std::cout << std::endl;
        matSrc->learnMateria(new Ice());
        matSrc->learnMateria(new Cure());
        std::cout << *matSrcPtr << std::endl;

        std::cout << std::endl;
        ICharacter* char1 = new Character("John Doe");
        Character* char1Ptr = (Character*) char1;
        std::cout << *char1Ptr << std::endl;

        std::cout << std::endl;
        AMateria* tmp;
        tmp = matSrc->createMateria("ice");
        char1->equip(tmp);
        tmp = matSrc->createMateria("cure");
        char1->equip(tmp);
        std::cout << *char1Ptr << std::endl;

        std::cout << std::endl;
        tmp = matSrc->createMateria("cure");
        char1->equip(tmp);
        tmp = matSrc->createMateria("fire");
        char1->equip(tmp);
        std::cout << "tmp: " << tmp << std::endl;
        tmp = matSrc->createMateria("ice");
        char1->equip(tmp);
        std::cout << *char1Ptr << std::endl;
        tmp = matSrc->createMateria("ice");
        char1->equip(tmp);
        delete tmp;
        tmp = NULL;

        std::cout << std::endl;
        ICharacter* char2 = new Character("Jenny");
        char1->use(0, *char2);
        char1->use(1, *char2);
        char1->use(2, *char2);
        char1->use(3, *char2);

        std::cout << std::endl;
        delete char2;
        delete char1;
        delete matSrc;
    }
    
    return 0;
}