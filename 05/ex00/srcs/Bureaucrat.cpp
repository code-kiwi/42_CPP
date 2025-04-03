/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:08:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/03 18:15:20 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooLowException what(void) const throw() {
    return "The grade cannot be that low";
}

const char* Bureaucrat::GradeTooHighException what(void) const throw() {
    return "The grade cannot be that high";
}

Bureaucrat(void);
Bureaucrat(const std::string& name, const unsigned int grade);
Bureaucrat(const Bureaucrat& otherBureaucrat);
~Bureaucrat(void);

Bureaucrat& operator=(const Bureaucrat& otherBureaucrat);

const std::string getName(void) const;
unsigned int getgrade(void) const;

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat);

#endif
