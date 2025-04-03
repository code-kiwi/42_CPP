/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:12:20 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/03 18:09:24 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat {
    private:
        const std::string _name;
        unsigned int _grade;

    public:
        class GradeTooLowException: public std::exception {
            public:
                const char* what(void) const throw();
        };

        class GradeTooHighException: public std::exception {
            public:
                const char* what(void) const throw();
        };

        Bureaucrat(void);
        Bureaucrat(const std::string& name, const unsigned int grade);
        Bureaucrat(const Bureaucrat& otherBureaucrat);
        ~Bureaucrat(void);

        Bureaucrat& operator=(const Bureaucrat& otherBureaucrat);

        const std::string getName(void) const;
        unsigned int getgrade(void) const;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat);

#endif
