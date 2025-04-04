/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:13:11 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/04 22:04:14 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

unsigned int Form::validateGrade(unsigned int grade) {
    if (grade > Form::MIN_GRADE) {
        throw GradeTooLowException();
    } else if (grade < Form::MAX_GRADE) {
        throw GradeTooHighException();
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