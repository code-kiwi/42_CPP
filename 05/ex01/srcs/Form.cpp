/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:13:11 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/10 17:31:02 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooLowException::what(void) const throw() {
    return "ERROR Form: Grade too low";
}

const char* Form::GradeTooHighException::what(void) const throw() {
    return "ERROR Form: Grade too high";
}

unsigned int Form::validateGrade(unsigned int grade) {
    if (grade > Form::MIN_GRADE) {
        throw Form::GradeTooLowException();
    } else if (grade < Form::MAX_GRADE) {
        throw Form::GradeTooHighException();
    }
    return grade;
}

Form::Form(void): _name("Undefined"), _isSigned(false), _signGrade(Form::MIN_GRADE), _execGrade(Form::MIN_GRADE) {
    std::cout << "Form default Constructor called." << std::endl;
}

Form::Form(const std::string& name, unsigned int signGrade, unsigned int execGrade): _name(name), _isSigned(false), _signGrade(Form::validateGrade(signGrade)), _execGrade(Form::validateGrade(execGrade)) {
    std::cout << "Form param. Constructor called." << std::endl;
}

Form::Form(const Form& otherForm): _name(otherForm._name), _isSigned(otherForm._isSigned), _signGrade(otherForm._signGrade), _execGrade(otherForm._execGrade) {
    std::cout << "Form copy Constructor called." << std::endl;
}

Form::~Form(void) {
    std::cout << "Form Destructor called." << std::endl;
}

Form& Form::operator=(const Form& otherForm) {
    if (this != &otherForm) {
        this->_isSigned = otherForm._isSigned;
    }
    std::cout << "Form assignment operator called." << std::endl;
    return *this;
}

const std::string Form::getName(void) const {
    return this->_name;
}

bool Form::getSignedStatus(void) const {
    return this->_isSigned;
}

unsigned int Form::getSignGrade(void) const {
    return this->_signGrade;
}

unsigned int Form::getExecGrade(void) const {
    return this->_execGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getgrade() > this->_signGrade) {
        throw Form::GradeTooLowException();
    }
    this->_isSigned = true;
}

std::ostream& operator<<(std::ostream& o, const Form& form) {
    o
        << "Form: "
        << form.getName()
        << ": "
        << (form.getSignedStatus() ? "SIGNED" : "NOT SIGNED")
        << " - signGrade: "
        << form.getSignGrade()
        << " - execGrade: "
        << form.getExecGrade();
    return o;
}