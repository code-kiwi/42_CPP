/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:58:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/11 22:17:18 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
    private:
        static const unsigned int DEFAULT_SIGN_GRADE = 145;
        static const unsigned int DEFAULT_EXEC_GRADE = 137;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& otherForm);
        ~ShrubberyCreationForm(void);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& otherForm);
        
        void executeAction(const Bureaucrat& executor) const;
};

#endif
