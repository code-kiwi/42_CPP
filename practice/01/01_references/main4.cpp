/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 00:19:18 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 00:36:55 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Student {
	private:
		std::string	_login;

	public:
		Student(const std::string& login) : _login(login) {}

		std::string&		getLoginRef(void) {
			return (_login);
		}

		const std::string&	getLoginRefConst(void) const {
			return (_login);
		}

		std::string*		getLoginPtr(void) {
			return (&_login);
		}

		const std::string* getLoginPtrConst(void) const {
			return (&_login);
		}
};

int	main(void) {
	Student			bob = Student("bjufar");
	const Student	jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	return (0);
}

/**
 * NOTES:
 * - jim is declared as a const Student, which means that its members cannot be modified
 * - references SHOULD NOT replace the use of pointers. Pointers are still useful and
 * references complete the use of pointers. Pointers can be NULL and we can change the target
 * they are pointing to: it is useful, remember the game character who could have a weapon,
 * change it or have no weapon. Its weapon member has to be nullable or we have to be able to modify it.
 * - REMEMBER: if it never changes, it is a reference, otherwise it is a pointer
 */