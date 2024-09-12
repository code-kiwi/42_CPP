/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:42:54 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 20:00:30 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class	Sample {
	public:
		float const pi;
		int			qd;

		Sample(float const f);
		~Sample(void);

		void	bar(void) const; // !!! IMPORTANT !!! his syntax means that this method does not affect the attributes of the current instance
};

#endif