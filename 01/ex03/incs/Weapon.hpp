/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:14:13 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/26 13:41:24 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
    private:
        std::string _type;
    public:
        Weapon(const std::string& type);
        ~Weapon(void);
        const std::string& getType(void) const;
        void setType(const std::string& type);
};

#endif
