/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:11:46 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 03:35:02 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): AAnimal("Cat"), _brain(new Brain()) {
    std::cout << "Cat default Constructor called." << std::endl;
}

Cat::Cat(const Cat& otherCat): AAnimal(otherCat), _brain(new Brain(*otherCat._brain)) {
    std::cout << "Cat copy Constructor called." << std::endl;
}

Cat::~Cat(void) {
    std::cout << "Cat Destructor called." << std::endl;
    delete this->_brain;
}

Cat& Cat::operator=(const Cat& otherCat) {
    std::cout << "Cat assignment operator called." << std::endl;
    if (this != &otherCat) {
        AAnimal::operator=(otherCat);
        delete this->_brain;
        this->_brain = new Brain(*otherCat._brain);
    }
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "The Cat says MEOOOOOOOW." << std::endl;
}

Brain* Cat::getBrain(void) const {
    return this->_brain;
}

std::ostream& operator<<(std::ostream& o, const Cat& cat) {
    std::cout << "Cat of type: " << cat.getType();
    return o;
}
