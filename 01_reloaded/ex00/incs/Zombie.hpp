/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:34:56 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/24 09:44:55 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
    private:
        std::string _name;

    public:
        Zombie(const std::string &name);
        ~Zombie(void);
        void announce(void) const;
};

#endif
