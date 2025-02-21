/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:35:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 08:12:58 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
    private:
        static const int INVENTORY_SIZE = 4;
        std::string _name;
        AMateria* _inventory[4];

        static void initInventory(AMateria** _inventory);
        static void deleteInventory(AMateria** _inventory);
        
    public:
        Character(void);
        Character(const std::string& name);
        Character(const Character& otherCharacter);
        ~Character(void);

        Character& operator=(const Character& otherCharacter);

        const std::string& getName() const;
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        const AMateria** getInventory(void) const;

        static int getInventorySize(void);
};

std::ostream& operator<<(std::ostream& o, const Character& character);

#endif
