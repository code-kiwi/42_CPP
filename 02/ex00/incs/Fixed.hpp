/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:51:31 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/05 20:12:43 by mhotting         ###   ########.fr       */
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
        ~Fixed(void);
        
        Fixed& operator=(const Fixed& f);

        int getRawBits(void) const;
        void setRawBits(const int raw);
};

#endif
