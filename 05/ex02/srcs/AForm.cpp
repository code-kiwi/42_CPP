/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:13:11 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/22 13:12:19 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char* AForm::GradeTooLowException::what(void) const throw() {
    return "ERROR AForm: Grade too low";
}

const char* AForm::GradeTooHighException::what(void) const throw() {
    return "ERROR AForm: Grade too high";
}

unsigned int AForm::validateGrade(unsigned int grade) {
    if (grade > AForm::MIN_GRADE) {
        throw AForm::GradeTooLowException();
    } else if (grade < AForm::MAX_GRADE) {
        throw AForm::GradeTooHighException();
    }
    return grade;
}

AForm::AForm(void): _name("Undefined"), _target("Undefined"), _isSigned(false), _signGrade(AForm::MIN_GRADE), _execGrade(AForm::MIN_GRADE) {
    std::cout << "AForm default Constructor called." << std::endl;
}

AForm::AForm(const std::string& name, const std::string& target, unsigned int signGrade, unsigned int execGrade): _name(name), _target(target), _isSigned(false), _signGrade(AForm::validateGrade(signGrade)), _execGrade(AForm::validateGrade(execGrade)) {
    std::cout << "AForm parameter Constructor called." << std::endl;
}

AForm::AForm(const AForm& otherAForm): _name(otherAForm._name), _target(otherAForm._target), _isSigned(otherAForm._isSigned), _signGrade(otherAForm._signGrade), _execGrade(otherAForm._execGrade) {
    std::cout << "AForm copy Constructor called." << std::endl;
}

AForm::~AForm(void) {
    std::cout << "AForm Destructor called." << std::endl;
}

AForm& AForm::operator=(const AForm& otherAForm) {
    if (this != &otherAForm) {
        this->_isSigned = otherAForm._isSigned;
    }
    std::cout << "AForm assignment operator called." << std::endl;
    return *this;
}

const std::string AForm::getName(void) const {
    return this->_name;
}

const std::string AForm::getTarget(void) const {
    return this->_target;
}

bool AForm::getSignedStatus(void) const {
    return this->_isSigned;
}

unsigned int AForm::getSignGrade(void) const {
    return this->_signGrade;
}

unsigned int AForm::getExecGrade(void) const {
    return this->_execGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getgrade() > this->_signGrade) {
        throw AForm::GradeTooLowException();
    }
    this->_isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const {
    if (executor.getgrade() > this->_execGrade) {
        throw AForm::GradeTooLowException();
    }
    try {
        this->executeAction(executor);
        std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Form execution failed : " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& o, const AForm& form) {
    o
        << "AForm: "
        << form.getName()
        << " - "
        << (form.getSignedStatus() ? "SIGNED" : "NOT SIGNED")
        << " - signGrade: "
        << form.getSignGrade()
        << " - execGrade: "
        << form.getExecGrade()
        << " - Target: "
        << form.getTarget();
    return o;
}