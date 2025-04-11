/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:12:20 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/11 18:05:53 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

#include "AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        static const unsigned int MAX_GRADE = 1;
        static const unsigned int MIN_GRADE = 150;
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

        void incrementGrade(void);
        void decrementGrade(void);

        void signForm(AForm& form) const;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat);

#endif
