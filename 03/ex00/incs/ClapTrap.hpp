/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:23:29 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/12 10:27:52 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
    private:
        const std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
        
    public:
        ClapTrap(void);
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& otherClapTrap);

        ~ClapTrap(void);

        ClapTrap& operator=(const ClapTrap& otherClapTrap);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        const std::string& getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;
};

std::ostream& operator<<(std::ostream& o, const ClapTrap& ct);

#endif
