/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:21:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/22 14:16:24 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ExecutionFileHandlingException::ExecutionFileHandlingException(const std::string& filename): _message("Failed to handle file " + filename) {}

ShrubberyCreationForm::ExecutionFileHandlingException::~ExecutionFileHandlingException() throw() {}

const char* ShrubberyCreationForm::ExecutionFileHandlingException::what(void) const throw() {
    return this->_message.c_str();
}

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", "Undefined", ShrubberyCreationForm::DEFAULT_SIGN_GRADE, ShrubberyCreationForm::DEFAULT_EXEC_GRADE) {
    std::cout << "ShrubberyCreationForm default Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", target, ShrubberyCreationForm::DEFAULT_SIGN_GRADE, ShrubberyCreationForm::DEFAULT_EXEC_GRADE) {
    std::cout << "ShrubberyCreationForm parameter Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& otherForm): AForm(otherForm) {
    std::cout << "ShrubberyCreationForm copy Constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& otherForm) {
    std::cout << "ShrubberyCreationForm Assignment operator called." << std::endl;
    if (this != &otherForm) {
        AForm::operator=(otherForm);
    }
    return *this;
}

void ShrubberyCreationForm::executeAction(const Bureaucrat& executor) const {
    std::string filename = executor.getName() + "_shrubbery";
    std::ofstream outFile(filename.c_str());

    if (!outFile.is_open()) {
        throw ShrubberyCreationForm::ExecutionFileHandlingException(filename);
    }
    outFile
        << "                                              .     " << std::endl
        << "                                   .         ;      " << std::endl
        << "      .              .              ;%     ;;       " << std::endl
        << "        ,           ,                :;%  %;        " << std::endl
        << "         :         ;                   :;%;'     ., " << std::endl
        << ",.        %;     %;            ;        %;'    ,;   " << std::endl
        << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl
        << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl
        << "    ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl
        << "     `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl
        << "      `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl
        << "         `:%;.  :;bd%;          %;@%;'              " << std::endl
        << "           `@%:.  :;%.         ;@@%;'               " << std::endl
        << "             `@%.  `;@%.      ;@@%;                 " << std::endl
        << "               `@%%. `@%%    ;@@%;                  " << std::endl
        << "                 ;@%. :@%%  %@@%;                       oxoxoo    ooxoo" << std::endl
        << "                   %@bd%%%bd%%:;                      ooxoxo oo  oxoxooo" << std::endl
        << "                     #@%%%%%:;;                      oooo xxoxoo ooo ooox" << std::endl
        << "                     %@@%%%::;                       oxo o oxoxo  xoxxoxo" << std::endl
        << "                     %@@@%(o);  . '                   oxo xooxoooo o ooo" << std::endl
        << "                     %@@@o%;:(.,'                       ooo\\oo\\  /o/o" << std::endl
        << "                 `.. %@@@o%::;                              \\  \\/ /" << std::endl
        << "                    `)@@@o%::;                               |   /" << std::endl
        << "                     %@@(o)::;                               |  |" << std::endl
        << "                    .%@@@@%::;                               | D|" << std::endl
        << "                    ;%@@@@%::;.                              |  |" << std::endl
        << "                   ;%@@@@%%:;;;.                             |  |" << std::endl
        << "_______________...;%@@@@@%%:;;;;,.._________________________/____\\____" << std::endl;
    if (outFile.fail()) {
        throw ShrubberyCreationForm::ExecutionFileHandlingException(filename);
    }
    outFile.close();
}
