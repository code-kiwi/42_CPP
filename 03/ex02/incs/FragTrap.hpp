/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:09 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 00:49:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& otherFragTrap);

        ~FragTrap(void);

        FragTrap& operator=(const FragTrap& otherFragTrap);
        
        void attack(const std::string& target);
        void highFivesGuys(void);
};

std::ostream& operator<<(std::ostream& o, const FragTrap& st);

#endif
