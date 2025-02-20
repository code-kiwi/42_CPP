/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:44:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 22:58:58 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(const WrongCat& otherWrongCat);
        ~WrongCat(void);

        WrongCat& operator=(const WrongCat& otherWrongCat);

        void makeSound(void) const;
};

std::ostream& operator<<(std::ostream& o, const WrongCat& wrongCat);

#endif
