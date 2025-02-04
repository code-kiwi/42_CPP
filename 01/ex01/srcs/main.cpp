/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:55:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/24 11:28:44 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void) {
    Zombie *zombies = zombieHorde(42, "Robert");

    for (int i = 0; i < 42; i++) {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}
