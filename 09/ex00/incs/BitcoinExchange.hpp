/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 22:52:01 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/12 20:26:53 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include "BitcoinHistory.hpp"

#include <string>

class BitcoinExchange {
public:
    static void parseInputFile(const std::string &fileName, const BitcoinHistory &history);

private:
    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange &);
    ~BitcoinExchange(void);
    BitcoinExchange &operator=(const BitcoinExchange &);

    static void handleInputLine(const std::string &line, const BitcoinHistory &history);
};

#endif
