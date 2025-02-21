/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:44:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 03:44:11 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {
    protected:
        std::string _type;

    public:
        AAnimal(void);
        AAnimal(const std::string& type);
        AAnimal(const AAnimal& otherAnimal);
        virtual ~AAnimal(void);

        AAnimal& operator=(const AAnimal& otherAnimal);

        virtual void makeSound(void) const = 0;

        const std::string& getType(void) const;
};

#endif
