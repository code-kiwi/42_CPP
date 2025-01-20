/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:43:52 by codekiwi          #+#    #+#             */
/*   Updated: 2025/01/17 15:16:11 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact _contacts[8];
        size_t  _nextIndex;
        bool    _isFull;
    
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        size_t  getLength(void) const;
        void    addContact(void);
        void    displayContacts(void) const;
        void    displayContact(size_t index) const;
};

#endif
