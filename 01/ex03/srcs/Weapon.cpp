/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:01:19 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 22:13:23 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {};

Weapon::~Weapon(void) {};

const std::string	Weapon::getType(void) const {
	return (_type);
}

void	Weapon::setType(std::string type) {
	_type = type;
}
