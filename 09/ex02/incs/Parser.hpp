/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:04:48 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/13 19:11:44 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
#define PARSER_HPP

#include <string>
#include <vector>

class Parser {
public:
    static void parseArg(std::vector<int> &numbers, int argc, char **argv);
    static void parseArg(std::vector<int> &numbers, std::string args);

private:
    Parser(void);
    Parser(const Parser &);
    ~Parser(void);
    Parser &operator=(const Parser &);

    static int stringToPositiveInt(const std::string &str);
    static void trimStr(std::string &s);
    static void trimLeftStr(std::string &s);
};

#endif
