/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:51:31 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/06 15:43:01 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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

        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);

        bool operator<(const Fixed& f) const;
        bool operator<=(const Fixed& f) const;
        bool operator>(const Fixed& f) const;
        bool operator>=(const Fixed& f) const;
        bool operator==(const Fixed& f) const;
        bool operator!=(const Fixed& f) const;

        Fixed operator+(const Fixed& f) const;
        Fixed operator-(const Fixed& f) const;
        Fixed operator*(const Fixed& f) const;
        Fixed operator/(const Fixed& f) const;

        static Fixed& min(Fixed& f1, Fixed& f2);
        static const Fixed& min(const Fixed& f1, const Fixed& f2);
        static Fixed& max(Fixed& f1, Fixed& f2);
        static const Fixed& max(const Fixed& f1, const Fixed& f2);


        int getRawBits(void) const;
        void setRawBits(const int raw);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& f);

#endif
