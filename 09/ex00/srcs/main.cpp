/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/24 18:47:41 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "BitcoinHistory.hpp"
#include "utils.hpp"

#include <iostream>

int main(void) {
    // Parsing the database
    try {
        BitcoinHistory hist(HISTORY_FILENAME);
        std::cout << hist << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Error : " << e.what() << std::endl;
    }

    return 0;
}
