/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:44:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 03:34:32 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
    private:
        Brain* _brain;

    public:
        Dog(void);
        Dog(const Dog& otherDog);
        ~Dog(void);

        Dog& operator=(const Dog& otherDog);

        void makeSound(void) const;
        Brain* getBrain(void) const;
};

std::ostream& operator<<(std::ostream& o, const Dog& dog);

#endif
