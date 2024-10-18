/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:02:32 by codekiwi          #+#    #+#             */
/*   Updated: 2024/10/18 14:44:27 by codekiwi         ###   ########.fr       */
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
		Fixed(const int n);
		Fixed(const float f);

		~Fixed();

		Fixed&	operator=(const Fixed& f);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& f);

#endif
