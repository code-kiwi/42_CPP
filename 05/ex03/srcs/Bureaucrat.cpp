/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:08:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/22 15:17:18 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
    return "ERROR Bureaucrat: Grade too low";
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
    return "ERROR Bureaucrat: Grade too high";
}

Bureaucrat::Bureaucrat(void): _name("Undefined"), _grade(Bureaucrat::MIN_GRADE) {
    std::cout << "Bureaucrat default Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, const unsigned int grade): _name(name) {
    if (grade < Bureaucrat::MAX_GRADE) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > Bureaucrat::MIN_GRADE) {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
    std::cout << "Bureaucrat param. Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& otherBureaucrat): _name(otherBureaucrat._name), _grade(otherBureaucrat._grade) {
    std::cout << "Bureaucrat copy Constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Bureaucrat Destructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& otherBureaucrat) {
    std::cout << "Bureaucrat assignment operator called." << std::endl;
    if (this != &otherBureaucrat) {
        this->_grade = otherBureaucrat._grade;
    }
    return *this;
}

const std::string Bureaucrat::getName(void) const {
    return this->_name;
}

unsigned int Bureaucrat::getgrade(void) const {
    return this->_grade;
}

void Bureaucrat::incrementGrade(void) {
    if (this->_grade == Bureaucrat::MAX_GRADE) {
        throw Bureaucrat::GradeTooHighException();
    }
    this->_grade--;
}

void Bureaucrat::decrementGrade(void) {
    if (this->_grade == Bureaucrat::MIN_GRADE) {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade++;
}

void Bureaucrat::signForm(AForm& form) const {
    if (form.getSignedStatus()) {
        std::cerr
            << this->_name
            << " couldn’t sign "
            << form.getName()
            << " because it is already signed."
            << std::endl;
        return ;
    }
    try {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cerr << this->_name << " couldn’t sign " << form.getName() << " because " << e.what() << "." << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const& form) {
    try {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cerr << this->_name << " couldn’t execute " << form.getName() << " because " << e.what() << "." << std::endl;
    }
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat) {
    o 
        << bureaucrat.getName()
        << ", bureaucrat grade "
        << bureaucrat.getgrade()
        << ".";
    return o;
}

