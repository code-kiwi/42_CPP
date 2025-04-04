/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:12:20 by mhotting          #+#    #+#             */
/*   Updated: 2025/04/04 20:35:01 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
    private:
        static const unsigned int MAX_GRADE = 1;
        static const unsigned int MIN_GRADE = 150;
        const std::string _name;
        unsigned int _grade;

    public:
        Bureaucrat(void);
        Bureaucrat(const std::string& name, const unsigned int grade);
        Bureaucrat(const Bureaucrat& otherBureaucrat);
        ~Bureaucrat(void);

        Bureaucrat& operator=(const Bureaucrat& otherBureaucrat);

        const std::string getName(void) const;
        unsigned int getgrade(void) const;

        void incrementGrade(void);
        void decrementGrade(void);
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat);

#endif
