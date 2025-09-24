/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinHistory.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:16:56 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/24 18:43:13 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINHISTORY_HPP

#include <iostream>
#include <map>
#include <string>

class BitcoinHistory {
public:
    BitcoinHistory(const std::string &filename);
    BitcoinHistory(const BitcoinHistory &other);

    ~BitcoinHistory(void);

    const BitcoinHistory &operator=(const BitcoinHistory &other);

    const std::map<std::string, double> &getContent(void) const;

private:
    std::map<std::string, double> _content;
    BitcoinHistory(void);
};

std::ostream &operator<<(std::ostream &o, const BitcoinHistory &bcHist);

#endif