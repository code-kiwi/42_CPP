/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:19:49 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 16:33:56 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class   Harl {
	private:
		static const std::string	_strLevels[4];

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	unknown(void);
		
	public:
		Harl(void);
		~Harl(void);

		void	complain(std::string level);
};

#endif