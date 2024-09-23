/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:19:49 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 18:18:22 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class   Harl {
	private:
		enum	levelValues {
			DEBUG,
			INFO,
			WARNING,
			ERROR
		};

		static const std::string	_strLevels[4];

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	unknown(void);
		int		_resolveLevel(std::string& level) const;
		
	public:
		Harl(void);
		~Harl(void);

		void	complain(std::string level);
};

#endif