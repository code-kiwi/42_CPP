/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinHistory.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:16:56 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/23 18:23:12 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINHISTORY_HPP

#include <map>
#include <string>

class BitcoinHistory {
public:
    BitcoinHistory(const std::string &filename);
    BitcoinHistory(const BitcoinHistory &other);

    ~BitcoinHistory(void);

    const BitcoinHistory &operator=(const BitcoinHistory &other);

private:
    std::map<std::string, double> _content;
    BitcoinHistory(void);
};

#endif