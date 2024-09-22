/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:58:59 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/22 18:47:46 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <string>

#include  "Weapon.hpp"

class	HumanB {
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(const std::string& name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon& weapon);
};

#endif
