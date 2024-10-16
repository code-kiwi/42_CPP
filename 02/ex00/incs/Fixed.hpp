/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:02:32 by codekiwi          #+#    #+#             */
/*   Updated: 2024/10/16 19:15:49 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int					_value;
		static const int	_numBits;
	public:
		Fixed();
		Fixed(const Fixed& f);

		~Fixed();

		Fixed&	operator=(const Fixed& f);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
