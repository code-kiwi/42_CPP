/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:53 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 00:43:26 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPE_HPP
# define SAMPLE_HPP

class	Sample {
	public:
		Sample(void);
		~Sample(void);

		int		getFoo(void) const;
		void	setFoo(int v);

	private:
		int		_foo;
};

#endif
