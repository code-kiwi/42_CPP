/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:53 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 20:43:18 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPE2_HPP
# define SAMPLE2_HPP

class Sample2 {
    public: // By default, the elements of a class are in a private scope
        int foo;

        Sample2(void);
        ~Sample2(void);

        void    bar(void) const;
};

#endif

/**
 * NOTES:
 * - We can do the exact same things with struct and classes in CPP, but we
 * prefer using classes
 */
