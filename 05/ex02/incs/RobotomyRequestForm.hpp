/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:58:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/22 14:32:55 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>

#include "AForm.hpp"

class RobotomyRequestForm: public AForm {
    private:
        static const unsigned int DEFAULT_SIGN_GRADE = 72;
        static const unsigned int DEFAULT_EXEC_GRADE = 45;
        void executeAction(void) const;

    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& otherForm);
        ~RobotomyRequestForm(void);

        RobotomyRequestForm& operator=(const RobotomyRequestForm& otherForm);
};

#endif
