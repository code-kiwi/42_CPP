/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:58:18 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 22:51:40 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Integer {
	public:
		Integer(const int n) : _n(n) {
			std::cout << "Integer constructor called" << std::endl;
		}

		~Integer(void) {
			std::cout << "Integer destructor called" << std::endl;
		}

		int		getValue(void) const {
			return (_n);
		}

		Integer&	operator=(const Integer& rhs) { // returns Integer& because CPP has to handle a = b = c = d
			std::cout
				<< "Assignation operator called from "
				<< getValue()
				<< " to "
				<< rhs.getValue()
				<< std::endl;
			_n = rhs.getValue();
			return (*this);
		}

		Integer		operator+(const Integer& rhs) const {
			std::cout
				<< "Addition operator called with "
				<< getValue()
				<< " and "
				<< rhs.getValue()
				<< std::endl;
			return (Integer(getValue() + rhs.getValue()));			
		}

	private:
		int	_n;
};

int	main(void) {

}

/**
 * NOTES:
 * - "1 + 1": notation infixe -> operator between operands
 * - "+(1, 1)": notation préfixe, ou notation fonctionnelle, comme un appel de fonction
 * 		=> Elle peut aussi aboutir à: "1.+(1)", comme si 1 était une instance, '+'
 * 		une méthode appelée pour cette instance
 * - "1 1 +": notation postfixe, calcul de piles ???
 * - "operator" is a CPP keyword
 */