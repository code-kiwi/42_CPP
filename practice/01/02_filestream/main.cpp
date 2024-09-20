/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 00:38:46 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 00:47:13 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void) {
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;

	if (!ifs.is_open()) {
		std::cerr << "ERROR: impossible to open the 'numbers' file" << std::endl;
		return (1);
	}
	ifs >> dst >> dst2;
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.out");
	ofs << "I like ponies a whole damn lot" << std::endl;
	ofs.close();

	return (0);
}