/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:58:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/22 14:09:26 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <exception>
#include <fstream>

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
    private:
        static const unsigned int DEFAULT_SIGN_GRADE = 145;
        static const unsigned int DEFAULT_EXEC_GRADE = 137;
        void executeAction(const Bureaucrat& executor) const;

    public:
        class ExecutionFileHandlingException: public std::exception {
            private:
                std::string _message;
            public:
                ExecutionFileHandlingException(const std::string& filename);
                ~ExecutionFileHandlingException() throw();
                const char* what(void) const throw();
        };

        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& otherForm);
        ~ShrubberyCreationForm(void);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& otherForm);
};

#endif
