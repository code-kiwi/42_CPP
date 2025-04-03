/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:08:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/03 18:51:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
    return "The grade cannot be that low";
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
    return "The grade cannot be that high";
}

Bureaucrat::Bureaucrat(void) {

}

Bureaucrat::Bureaucrat(const std::string& name, const unsigned int grade) {

}

Bureaucrat::Bureaucrat(const Bureaucrat& otherBureaucrat) {

}

Bureaucrat::~Bureaucrat(void) {

}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& otherBureaucrat) {

}

const std::string Bureaucrat::getName(void) const {

}

unsigned int Bureaucrat::getgrade(void) const {

}

void Bureaucrat::incrementGrade(void) {

}

void Bureaucrat::decrementGrade(void) {

}


std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat) {
    
}

