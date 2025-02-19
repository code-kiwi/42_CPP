/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:09 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 02:38:59 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
    public:
        ScavTrap(void);
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& otherScavTrap);

        ~ScavTrap(void);

        ScavTrap& operator=(const ScavTrap& otherScavTrap);
        
        void attack(const std::string& target);
        void guardGate(void);
};

std::ostream& operator<<(std::ostream& o, const ScavTrap& st);

#endif
