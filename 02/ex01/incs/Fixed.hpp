/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:51:31 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/05 20:34:18 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int _rawBits;
        static const int _numBits;

    public:
        Fixed(void);
        Fixed(const Fixed& f);
        Fixed(const int num);
        Fixed(const float num);

        ~Fixed(void);
        
        Fixed& operator=(const Fixed& f);

        int getRawBits(void) const;
        void setRawBits(const int raw);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& f);

#endif
