/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 04:46:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 09:15:34 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
        std::string _type;

    public:
        AMateria(void);
        AMateria(const std::string& type);
        AMateria(const AMateria& otherAMateria);
        virtual ~AMateria(void);

        AMateria& operator=(const AMateria& otherAMateria);

        const std::string& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
