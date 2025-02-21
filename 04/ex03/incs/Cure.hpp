/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:07:40 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 08:35:31 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
    public:
        Cure(void);
        Cure(const Cure& otherCure);
        ~Cure(void);

        Cure& operator=(const Cure& otherCure);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
