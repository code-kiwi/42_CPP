/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:20:23 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/04 12:07:10 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

#include <string>

class Harl {
    private:
        static const std::string _strLevels[4];
        void (Harl::*_funcs[5])(void);
        
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void unknown(void);
    public:
        Harl(void);
        ~Harl(void);
        
        void complain(std::string level);
};

#endif
