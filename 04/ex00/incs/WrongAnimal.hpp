/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:44:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 22:55:54 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
    protected:
        std::string _type;

    public:
        WrongAnimal(void);
        WrongAnimal(const std::string& type);
        WrongAnimal(const WrongAnimal& otherWrongAnimal);
        ~WrongAnimal(void);

        WrongAnimal& operator=(const WrongAnimal& otherWrongAnimal);

        void makeSound(void) const;

        const std::string& getType(void) const;
};

std::ostream& operator<<(std::ostream& o, const WrongAnimal& wrongAnimal);

#endif
