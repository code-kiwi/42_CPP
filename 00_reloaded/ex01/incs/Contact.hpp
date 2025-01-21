/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:43:49 by codekiwi          #+#    #+#             */
/*   Updated: 2025/01/17 15:10:43 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
    public:
        Contact(void);
        Contact(
            const std::string &firstName,
            const std::string &lastName,
            const std::string &nickName,
            const std::string &phoneNumber,
            const std::string &darkestSecret
        );
        ~Contact();

        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickName(void) const;
        std::string getPhoneNumber(void) const;
        std::string getDarkestSecret(void) const;

        void setInfo(void);

        void    display(void) const;

        static std::string fieldInput(std::string const &prompt);
};

#endif
