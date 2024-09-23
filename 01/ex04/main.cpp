/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:32:26 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 12:50:21 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

bool	openFiles(
	std::string& infileName,
	std::string& outfileName,
	std::ifstream& infile,
	std::ofstream& outfile
) {
	infile.open(infileName.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error - " << infileName << " could not be opened" << std::endl;
		return (false);
	}
	outfile.open(outfileName.c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error - " << outfileName << " file could not be created" << std::endl;
		infile.close();
		return (false);
	}
	return (true);
}

bool	searchAndReplace(
	std::ifstream& infile,
	std::ofstream& outfile,
	std::string& toReplace,
	std::string& replaceWith
) {
	std::string	line;
	bool		noReplace;
	size_t		index;

	if (!infile.is_open() || infile.fail() || infile.bad()) {
		std::cerr << "Error searchAndReplace: the given infile is not valid" << std::endl;
		return (false);
	}
	if (!outfile.is_open() || outfile.fail() || outfile.bad()) {
		std::cerr << "Error searchAndReplace: the given outfile is not valid" << std::endl;
		return (false);
	}
	noReplace = (toReplace == replaceWith || toReplace == "");
	while (getline(infile, line)) {
		if (!noReplace) {
			while (true) {
				index = line.find(toReplace);
				if (index == std::string::npos)
					break ;
				line = line.substr(0, index) + replaceWith + line.substr(index + toReplace.length(), line.length());
			}
		}
		outfile << line << std::endl;
	}
	return (true);
}

int	main(int ac, char **av) {
	std::string		infileName, toReplace, replaceWith, outfileName;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (ac != 4) {
		std::cerr << "Usage: ./program <filename> <toReplace> <replaceWith>" << std::endl;
		return (EXIT_FAILURE);
	}
	infileName = av[1];
	toReplace = av[2];
	replaceWith = av[3];
	outfileName = infileName + ".replace";

	if (!openFiles(infileName, outfileName, infile, outfile))
		return (EXIT_FAILURE);
	if (!searchAndReplace(infile, outfile, toReplace, replaceWith)) {
		infile.close();
		outfile.close();
		return (EXIT_FAILURE);
	}
	infile.close();
	outfile.close();

	return (EXIT_SUCCESS);
}
