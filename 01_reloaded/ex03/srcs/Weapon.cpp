/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:14:17 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/26 14:29:58 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {}

Weapon::~Weapon(void) {}

const std::string& Weapon::getType(void) const {
    return this->_type;
}

void Weapon::setType(const std::string& type) {
    this->_type = type;
}
