/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:14:27 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/26 14:51:25 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>

#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon& _weapon;
    public:
        HumanA(const std::string& name, Weapon& weapon);
        ~HumanA(void);
        void attack(void) const;
};

#endif
