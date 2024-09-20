/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 00:12:10 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 00:17:13 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	byPtr(std::string* str) {
	*str += " and ponies";
}

void	byConstPtr(const std::string* str) {
	std::cout << *str << std::endl;
}

void	byRef(std::string& str) {
	str += " and ponies";
}

void	byConstRef(const std::string& str) {
	std::cout << str << std::endl;
}

int	main(void) {
	std::string	str1 = "I like butterflies";
	std::string	str2 = "I like dogs";

	std::cout << str1 << std::endl;
	byPtr(&str1);
	byConstPtr(&str1);

	std::cout << str2 << std::endl;
	byRef(str2);
	byConstRef(str2);

	return (0);
}