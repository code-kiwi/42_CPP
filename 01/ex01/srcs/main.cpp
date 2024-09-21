/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:38:38 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 20:26:27 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie*	zombieHorde(int nb, std::string name);

int	main(void) {
	size_t	nbZombies1 = 10, nbZombies2 = 5;
	Zombie*	zombies;

	// First test
	zombies = zombieHorde(nbZombies1, "Eenie");
	for (size_t i = 0; i < nbZombies1; i++) {
		zombies[i].announce();
	}
	delete [] zombies;

	// Second test
	zombies = zombieHorde(nbZombies2, "Moe");
	for (size_t i = 0; i < nbZombies2; i++) {
		zombies[i].announce();
	}
	delete [] zombies;

	return (0);
}
