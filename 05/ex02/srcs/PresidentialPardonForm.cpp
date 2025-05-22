/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:21:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/11 22:36:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", "Undefined", PresidentialPardonForm::DEFAULT_SIGN_GRADE, PresidentialPardonForm::DEFAULT_EXEC_GRADE) {
    std::cout << "PresidentialPardonForm default Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", target, PresidentialPardonForm::DEFAULT_SIGN_GRADE, PresidentialPardonForm::DEFAULT_EXEC_GRADE) {
    std::cout << "PresidentialPardonForm parameter Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& otherForm): AForm(otherForm) {
    std::cout << "PresidentialPardonForm copy Constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << "PresidentialPardonForm Destructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& otherForm) {
    std::cout << "PresidentialPardonForm Assignment operator called." << std::endl;
    if (this != &otherForm) {
        AForm::operator=(otherForm);
    }
    return *this;
}

void PresidentialPardonForm::executeAction(void) const {
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
