/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:27:03 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/14 17:58:09 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class	PhoneBook
{
	private:
		std::vector<Contact>	_contacts;
		size_t					_maxContacts;
		size_t					_nextIndex;
	public:
		PhoneBook(size_t maxContacts = 8);
		~PhoneBook();

		void	addContact(const Contact& contact);
		void	displayContacts(void) const;
};

#endif