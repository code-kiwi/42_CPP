/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 08:05:17 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/04 10:53:00 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>

bool openFiles(
    const std::string& infileName,
    const std::string& outfileName,
    std::ifstream& infile,
    std::ofstream& outfile
) {
    infile.open(infileName.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: " << infileName << " could not be opened" << std::endl;
        return false;
    }
    outfile.open(outfileName.c_str());
    if (!outfile.is_open()) {
        infile.close();
        std::cerr << "Error: " << outfileName << " could not be created" << std::endl;
        return false;
    }
    return true;
}

void searchAndReplace(
    std::ifstream& infile,
    std::ofstream& outfile,
    const std::string& toReplace,
    const std::string& replaceWith
) {
    size_t index;
    bool noReplace = (toReplace == replaceWith || toReplace.length() == 0);

    std::stringstream buffer;
    buffer << infile.rdbuf();
    std::string content = buffer.str();

    if (noReplace) {
        outfile << content;
        return ;
    }
    while (true) {
        index = content.find(toReplace);
        if (index == std::string::npos) {
            break ;
        }
        content.erase(index, toReplace.length());
        content.insert(index, replaceWith);
    }
    outfile << content;
}

int main(int argc, char **argv) {
    std::string infileName, outfileName, toReplace, replaceWith;
    std::ifstream infile;
    std::ofstream outfile;

    if (argc != 4) {
        std::cerr << "Usage: sed <filename> <toReplace> <replaceWith>" << std::endl;
        exit(EXIT_FAILURE);
    }
    infileName = argv[1];
    outfileName = infileName + ".replace";
    toReplace = argv[2];
    replaceWith = argv[3];

    if (!openFiles(infileName, outfileName, infile, outfile)) {
        exit(EXIT_FAILURE);
    }
    searchAndReplace(infile, outfile, toReplace, replaceWith);
    infile.close();
    outfile.close();

    return 0;
}
