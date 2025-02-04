/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:14:32 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/24 11:27:08 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}
