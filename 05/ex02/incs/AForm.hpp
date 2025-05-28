/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:41:52 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/28 02:17:01 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        static const unsigned int MAX_GRADE = 1;
        static const unsigned int MIN_GRADE = 150;
        const std::string _name;
        const std::string _target;
        bool _isSigned;
        const unsigned int _signGrade;
        const unsigned int _execGrade;

        static unsigned int validateGrade(unsigned int grade);
        
    protected:
        virtual void executeAction(void) const = 0;

    public:
        class GradeTooLowException: public std::exception {
            public:
                const char* what(void) const throw();
        };

        class GradeTooHighException: public std::exception {
            public:
                const char* what(void) const throw();
        };

        class UnsignedFormException: public std::exception {
            public:
                const char* what(void) const throw();
        };
        
        AForm(void);
        AForm(const std::string& name, const std::string& target, unsigned int signGrade, unsigned int execGrade);
        AForm(const AForm& otherAForm);
        virtual ~AForm(void);

        AForm& operator=(const AForm& otherAForm);

        const std::string getName(void) const;
        const std::string getTarget(void) const;
        bool getSignedStatus(void) const;
        unsigned int getSignGrade(void) const;
        unsigned int getExecGrade(void) const;

        void beSigned(const Bureaucrat& bureaucrat);
        void execute(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& o, const AForm& form);

#endif
