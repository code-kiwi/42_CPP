/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:00:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/06/27 23:23:37 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

class Data {
    private:
        const std::string _name;
        int _nb;

    public:
        Data(void);
        Data(const std::string& name, int nb);
        Data(const Data& otherData);
        Data& operator=(const Data& otherData);
        ~Data(void);

        int getNb(void) const;
        const std::string& getName(void) const;
};

std::ostream& operator<<(std::ostream& o, const Data& data);

#endif
