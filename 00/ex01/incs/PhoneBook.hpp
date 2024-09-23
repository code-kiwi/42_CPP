/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:27:03 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 13:13:24 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	_contacts[8];
		size_t	_nextIndex;
		bool	_isFull;
	public:
		PhoneBook(void);
		~PhoneBook();

		size_t	getLength(void) const;
		void	addContact(const Contact& contact);
		void	displayContacts(void) const;
		void	displayContact(size_t index) const;
};

#endif
