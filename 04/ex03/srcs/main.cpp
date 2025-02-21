/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 04:28:27 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 08:20:12 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"

int main(void) {
    Character* char1 = new Character("Bob");

    std::cout << std::endl;
    std::cout << *char1 << std::endl;

    std::cout << std::endl;
    delete char1;
    
    return 0;
}