/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:44:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 22:38:03 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>

#include "Animal.hpp"

class Dog: public Animal {
    public:
        Dog(void);
        Dog(const Dog& otherDog);
        ~Dog(void);

        Dog& operator=(const Dog& otherDog);

        void makeSound(void) const;
};

std::ostream& operator<<(std::ostream& o, const Dog& dog);

#endif
