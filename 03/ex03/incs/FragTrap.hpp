/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:09 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 10:57:15 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& otherFragTrap);

        ~FragTrap(void);

        FragTrap& operator=(const FragTrap& otherFragTrap);
        
        void attack(const std::string& target);
        void highFivesGuys(void);

        static unsigned int getDefaultHitPoints(void);
        static unsigned int getDefaultEnergyPoints(void);
        static unsigned int getDefaultAttackDamage(void);
};

std::ostream& operator<<(std::ostream& o, const FragTrap& st);

#endif
