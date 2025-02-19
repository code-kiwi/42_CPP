/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:06:10 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 11:34:02 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
    private:
        const std::string _name;
    
    public:
        DiamondTrap(void);
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& otherDiamondTrap);

        ~DiamondTrap(void);

        DiamondTrap& operator=(const DiamondTrap& otherDiamondTrap);

        void attack(const std::string& target);
        void whoAmI();

        const std::string& getName(void) const;
};

std::ostream& operator<<(std::ostream& o, const DiamondTrap& dt);

#endif
