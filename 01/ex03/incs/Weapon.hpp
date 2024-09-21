/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:59:43 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 22:13:29 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class   Weapon {
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string   getType(void) const;
        void                setType(std::string type);
};

#endif
