/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:14:30 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/26 14:51:29 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>

#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon* _weapon;
    public:
        HumanB(const std::string& name);
        ~HumanB(void);
        void attack(void) const;
        void setWeapon(Weapon& weapon);
};

#endif
