/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:55:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/24 10:11:32 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
    Zombie *zombie1;
    
    zombie1 = newZombie("Martin");
    zombie1->announce();
    delete zombie1;
    randomChump("Michel");

    return 0;
}
