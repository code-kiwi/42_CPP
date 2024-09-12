/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:53 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 20:42:28 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPE1_HPP
# define SAMPLE1_HPP

struct Sample1 {
    // By default, the elements of a class are in a public scope
    int foo;

    Sample1(void);
    ~Sample1(void);

    void bar(void) const;
};

#endif
