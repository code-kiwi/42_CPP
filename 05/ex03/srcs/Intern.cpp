/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 22:56:59 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/28 02:06:10 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm* Intern::_createShrubberyForm(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::_createRobotomyForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::_createPresidentialForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}

const std::string Intern::_formNames[] = {
    "shrubbery",
    "robotomy",
    "presidential"
};

AForm* (*Intern::_formCreators[])(const std::string&) = {
    &Intern::_createShrubberyForm,
    &Intern::_createRobotomyForm,
    &Intern::_createPresidentialForm
};

Intern::Intern(void) {
    std::cout << "Intern default Constructor called." << std::endl;
}

Intern::Intern(const Intern& otherIntern) {
    (void) otherIntern;
    std::cout << "Intern copy Constructor called." << std::endl;
}

Intern::~Intern(void) {
    std::cout << "Intern default Destructor called." << std::endl;
}

Intern& Intern::operator=(const Intern& otherIntern) {
    std::cout << "Intern Assignment operator called." << std::endl;
    if (this != &otherIntern) {}
    return *this;
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) const {
    size_t arraySize = sizeof(Intern::_formNames) / sizeof(Intern::_formNames[0]);
    size_t index;

    for (index = 0; index < arraySize; index++) {
        if (name == Intern::_formNames[index]) {
            break;
        }
    }
    if (index >= arraySize) {
        std::cout << "ERROR: Unknown form name \"" << name << "\"" << std::endl;
        return 0;
    }
    return Intern::_formCreators[index](target);
}
