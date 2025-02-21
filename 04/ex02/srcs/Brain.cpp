/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:22:24 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 02:32:28 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default Constructor called." << std::endl;
}

Brain::Brain(const Brain& otherBrain) {
    std::cout << "Brain copy Constructor called." << std::endl;
    for (size_t i = 0; i < Brain::NUM_IDEAS; i++) {
        this->_ideas[i] = otherBrain._ideas[i];
    }
}

Brain::~Brain(void) {
    std::cout << "Brain Destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& otherBrain) {
    std::cout << "Brain assignment operator called." << std::endl;
    if (this != &otherBrain) {
        for (size_t i = 0; i < Brain::NUM_IDEAS; i++) {
            this->_ideas[i] = otherBrain._ideas[i];
        }
    }
    return *this;
}

size_t Brain::getNumIdeas(void) const {
    return Brain::NUM_IDEAS;
}

const std::string* Brain::getAllIdeas(void) const {
    return this->_ideas;
}

void Brain::setAllIdeas(const std::string& idea) {
    for (size_t i = 0; i < Brain::NUM_IDEAS; i++) {
        this->_ideas[i] = idea;
    }
}

bool Brain::setIdea(const std::string& idea, size_t index) {
    if (index >= Brain::NUM_IDEAS) {
        return false;
    }
    this->_ideas[index] = idea;
    return true;
}
