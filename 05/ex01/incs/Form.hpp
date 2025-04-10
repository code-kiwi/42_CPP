/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:41:52 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/10 17:35:39 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        static const unsigned int MAX_GRADE = 1;
        static const unsigned int MIN_GRADE = 150;
        const std::string _name;
        bool _isSigned;
        const unsigned int _signGrade;
        const unsigned int _execGrade;

        static unsigned int validateGrade(unsigned int grade);
        
    public:
        class GradeTooLowException: public std::exception {
            public:
                const char* what(void) const throw();
        };

        class GradeTooHighException: public std::exception {
            public:
                const char* what(void) const throw();
        };
        
        Form(void);
        Form(const std::string& name, unsigned int signGrade, unsigned int execGrade);
        Form(const Form& otherForm);
        ~Form(void);

        Form& operator=(const Form& otherForm);

        const std::string getName(void) const;
        bool getSignedStatus(void) const;
        unsigned int getSignGrade(void) const;
        unsigned int getExecGrade(void) const;

        void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& o, const Form& form);

#endif
