/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:44:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 22:38:18 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>

#include "Animal.hpp"

class Cat: public Animal {
    public:
        Cat(void);
        Cat(const Cat& otherCat);
        ~Cat(void);

        Cat& operator=(const Cat& otherCat);

        void makeSound(void) const;
};

std::ostream& operator<<(std::ostream& o, const Cat& cat);

#endif
