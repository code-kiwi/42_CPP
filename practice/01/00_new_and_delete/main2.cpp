/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:48:31 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/20 15:51:31 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {
	private:
		std::string _login;

	public:
		Student() : _login("loginDefault") {
			std::cout <<"Student " << _login << " is born" << std::endl;
		}

		Student(std::string login) : _login(login) {
			std::cout <<"Student " << _login << " is born" << std::endl;
		}

		~Student(void) {
			std::cout << "Student " << _login << " died" << std::endl;
		}
};

int	main(void) {
	Student*	students = new Student[42];	// Allocates 42 students into the memory, calling the default constructor but without any parameter

	// Do some stuff

	delete [] students;
}