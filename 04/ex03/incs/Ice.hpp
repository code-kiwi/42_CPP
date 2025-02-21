/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:07:40 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 05:11:58 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
    Ice(void);
    Ice(const Ice& otherIce);
    ~Ice(void);

    Ice& operator=(const Ice& otherIce);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
