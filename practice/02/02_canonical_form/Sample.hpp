/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:45:51 by codekiwi          #+#    #+#             */
/*   Updated: 2024/10/16 01:51:17 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP

#include <iostream>

class	Sample {
	public:
		Sample(void);
		Sample(const int n);
		Sample(const Sample& src);
		~Sample(void);

		Sample&	operator=(const Sample& rhs);

		int	getFoo(void) const;
	private:
		int	_foo;
};

std::ostream&	operator<<(std::ostream& o, const Sample& i);

#endif
