/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 22:51:32 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/12 23:20:08 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>

#define OP_PLUS '+'
#define OP_MINUS '-'
#define OP_MUL '*'
#define OP_DIV '/'

class RPNCalculator {
public:
    static int execute(const std::string &input);

private:
    RPNCalculator(void);
    RPNCalculator(const RPNCalculator &);
    ~RPNCalculator(void);
    RPNCalculator &operator=(const RPNCalculator &);

    static bool isOp(char c);
    static int applyOp(int a, int b, char op);
};

#endif
