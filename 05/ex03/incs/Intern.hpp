/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 22:56:29 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/27 20:43:07 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

#include "AForm.hpp"

class Intern {   
    private:
        static const std::string _formNames[];
        static AForm* (*_formCreators[])(const std::string&);
        static AForm* _createShrubberyForm(const std::string& target);
        static AForm* _createRobotomyForm(const std::string& target);
        static AForm* _createPresidentialForm(const std::string& target);

    public:
        Intern(void);
        Intern(const Intern& otherIntern);
        ~Intern(void);

        Intern& operator=(const Intern& otherIntern);

        AForm* makeForm(const std::string& name, const std::string& target) const;
};

#endif
