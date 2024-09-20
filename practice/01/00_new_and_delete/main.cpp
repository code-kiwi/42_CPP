/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:31:05 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/20 15:48:22 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {
	private:
		std::string _login;

	public:
		Student(std::string login) : _login(login) {
			std::cout <<"Student " << _login << " is born" << std::endl;
		}

		~Student(void) {
			std::cout << "Student " << _login << " died" << std::endl;
		}
};

int	main(void) {
	Student		bob = Student("mhotting");		// Allocated onto the stack, will be destroyed automatically when the main functions exits
	Student*	jim = new Student("jgeorges");	// Dynamic allocation

	delete(jim);
	return (0);
}

/**
 * NOTES:
 * - allocating in CPP can be done with malloc/free, but for objects it would
 * be a bad idea to use them: constructors and destructors would not be called
 * - this is the reason why we use new/delete for allocating memory for objects
 */