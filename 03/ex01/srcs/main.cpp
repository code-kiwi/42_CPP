/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:04:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/12 12:12:26 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap st1("Bob");

    std::cout << std::endl;
    std::cout << st1 << std::endl;

    std::cout << std::endl;
    return 0;
}