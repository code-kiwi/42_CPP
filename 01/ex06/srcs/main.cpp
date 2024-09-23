/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:14:13 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 18:19:28 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl	harl;

	if (ac != 2) {
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		return (0);
	}
	harl.complain(av[1]);
	return (0);
}