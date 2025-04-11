/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:21:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/11 22:36:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", "Undefined", ShrubberyCreationForm::DEFAULT_SIGN_GRADE, ShrubberyCreationForm::DEFAULT_EXEC_GRADE) {
    std::cout << "ShrubberyCreationForm default Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", target, ShrubberyCreationForm::DEFAULT_SIGN_GRADE, ShrubberyCreationForm::DEFAULT_EXEC_GRADE) {
    std::cout << "ShrubberyCreationForm parameter Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& otherForm): AForm(otherForm) {
    std::cout << "ShrubberyCreationForm copy Constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& otherForm) {
    std::cout << "ShrubberyCreationForm Assignment operator called." << std::endl;
    if (this != &otherForm) {
        AForm::operator=(otherForm);
    }
    return *this;
}

void ShrubberyCreationForm::executeAction(const Bureaucrat& executor) const {
    (void) executor;
    std::cout << "ShrubberyCreationForm executeAction called." << std::endl;
}
