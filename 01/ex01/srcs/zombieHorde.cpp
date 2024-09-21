/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:13:04 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 19:25:24 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"

Zombie*	zombieHorde(int nb, std::string name) {
	Zombie	*zombies;

	zombies = new Zombie[nb];
	for (int i = 0; i < nb; i++) {
		zombies[i].setName(name);
	}
	return (zombies);
}
