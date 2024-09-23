/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:48:51 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 19:56:39 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Sample {
	public:
		Sample(void) {
			std:: cout << "Sample constructor called" << std::endl;
		}

		~Sample(void) {
			std:: cout << "Sample destructor called" << std::endl;
		}

		void	bar(const char c) const {
			std::cout << "Member function called with a char " << c << std::endl;
		}

		void	bar(const int n) const {
			std::cout << "Member function called with an int " << n << std::endl;
		}

		void	bar(const float z) const {
			std::cout << "Member function called with a float " << z << std::endl;
		}

		void	bar(const Sample& i) const {
			std::cout << "Member function called with a Sample " << &i << std::endl;
		}
};

int	main(void) {
	Sample sample;

	sample.bar('c');
	sample.bar(12);
	sample.bar(42.5f);
	sample.bar(sample);

	return (0);
}
