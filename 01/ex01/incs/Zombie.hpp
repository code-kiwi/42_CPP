/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:44:32 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 19:20:05 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class	Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie(void);
		Zombie(const std::string& name);
		~Zombie(void);

		void	setName(std::string name);

		void	announce(void);
};

#endif