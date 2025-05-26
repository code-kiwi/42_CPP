/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:21:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/11 22:36:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", "Undefined", RobotomyRequestForm::DEFAULT_SIGN_GRADE, RobotomyRequestForm::DEFAULT_EXEC_GRADE) {
    std::cout << "RobotomyRequestForm default Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm", target, RobotomyRequestForm::DEFAULT_SIGN_GRADE, RobotomyRequestForm::DEFAULT_EXEC_GRADE) {
    std::cout << "RobotomyRequestForm parameter Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& otherForm): AForm(otherForm) {
    std::cout << "RobotomyRequestForm copy Constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << "RobotomyRequestForm Destructor called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& otherForm) {
    std::cout << "RobotomyRequestForm Assignment operator called." << std::endl;
    if (this != &otherForm) {
        AForm::operator=(otherForm);
    }
    return *this;
}

void RobotomyRequestForm::executeAction(void) const {
    std:: cout << "Drilling... TRRR TR TRR TRRRRRR TRRRR TR Trrrrr trr tr..." << std::endl;
    srand(time(NULL));
    if (rand() % 2 == 0) {
        std::cout << "INFO: " << this->getTarget() << " has been robotomized !" << std::endl;
    } else {
        std::cout << "INFO: the robotomy failed :(" << std::endl;
    }
}
