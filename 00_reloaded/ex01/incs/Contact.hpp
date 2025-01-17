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

        std::string getFirstName(bool truncated = false) const;
        std::string getLastName(bool truncated = false) const;
        std::string getNickName(bool truncated = false) const;
        std::string getPhoneNumber(void) const;
        std::string getDarkestSecret(void) const;

        void    display(void) const;
};

#endif
