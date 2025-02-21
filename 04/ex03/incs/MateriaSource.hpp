/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:29:37 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 16:54:16 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>

#include "AMateria.hpp"

class MateriaSource {
    private:
        enum { STORAGE_SIZE = 4 };
        AMateria* _storage[MateriaSource::STORAGE_SIZE];

        static void initStorage(AMateria** storage);
        static void deleteStorage(AMateria** storage);

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& otherMSource);
        ~MateriaSource(void);

        MateriaSource& operator=(const MateriaSource& otherMSource);

        void learnMateria(AMateria*);
        AMateria* createMateria(const std::string& type);

        const AMateria** getStorage(void) const;

        static int getStorageSize(void);
};

std::ostream& operator<<(std::ostream& o, const MateriaSource& materiaSource);

#endif
