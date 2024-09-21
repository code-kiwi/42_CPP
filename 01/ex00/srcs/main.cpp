/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:38:38 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 13:30:50 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int	main(void) {
	Zombie*	zombie1 = newZombie("Maurice");
	zombie1->announce();
	delete zombie1;
	randomChump("Billy");
	return (0);
}
