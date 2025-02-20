/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:44:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 22:22:59 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
    protected:
        std::string _type;

    public:
        Animal(void);
        Animal(const std::string& type);
        Animal(const Animal& otherAnimal);
        virtual ~Animal(void);

        Animal& operator=(const Animal& otherAnimal);

        virtual void makeSound(void) const;

        const std::string& getType(void) const;
};

std::ostream& operator<<(std::ostream& o, const Animal& animal);

#endif
