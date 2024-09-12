/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:53 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 20:27:26 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPE_HPP
# define SAMPLE_HPP

class	Sample {
	public:
		int		publicFoo;

		Sample(void);
		~Sample(void);

		void	publicBar(void) const;
	
	private:
		int		_privateFoo;

		void	_privateBar(void) const;
};

#endif
