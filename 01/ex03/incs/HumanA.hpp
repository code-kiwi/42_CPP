/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:48:40 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/22 18:49:07 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <string>

#include  "Weapon.hpp"

class	HumanA {
	private:
		std::string	_name;
		Weapon&		_weapon;

	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA(void);

		void	attack(void) const;

};

#endif
