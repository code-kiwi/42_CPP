/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:58:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/22 11:56:03 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
    private:
        static const unsigned int DEFAULT_SIGN_GRADE = 25;
        static const unsigned int DEFAULT_EXEC_GRADE = 5;
        void executeAction(const Bureaucrat& executor) const;

    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& otherForm);
        ~PresidentialPardonForm(void);

        PresidentialPardonForm& operator=(const PresidentialPardonForm& otherForm);
};

#endif
