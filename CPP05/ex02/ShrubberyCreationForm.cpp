/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:46:43 by afalconi          #+#    #+#             */
/*   Updated: 2024/04/30 17:48:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation Form", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &b)
{
	if (this == &b)
		return(*this);
	this->setTarget(b.getTarget());
	return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &b): AForm("Shrubbery Creation Form", 145, 137)
{
	*this = b;
}


void		ShrubberyCreationForm::setTarget(std::string newtarget)
{
	this->target = newtarget;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return(this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string tmp;
	try
	{
		if (executor.getGrade() > this->getExeGrade())
			throw(AForm::GradeTooLowException());
		else if (this->getSig() == false)
			throw(AForm::AFormIsNotSigned());
		tmp = this->target + "_shrubbery" ;
		std::ofstream	file(tmp.c_str());
		file << "                                                         ." << std::endl;
		file << "                                              .         ;" << std::endl;
		file << "                 .              .              ;%     ;;" << std::endl;
		file << "                   ,           ,                :;%  %;" << std::endl;
		file << "                    :         ;                   :;%;'     .,  " << std::endl;
		file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
		file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
		file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
		file << "                      `@%:.  :;%.         ;@@%;'" << std::endl;
		file << "                        `@%.  `;@%.      ;@@%;" << std::endl;
		file << "                          `@%%. `@%%    ;@@%;" << std::endl;
		file << "                            ;@%. :@%%  %@@%;" << std::endl;
		file << "                              %@bd%%%bd%%:;" << std::endl;
		file << "                                #@%%%%%:;;" << std::endl;
		file << "                                #@%%%%%:;" << std::endl;
		file << "                                %@@%%%::; " << std::endl;
		file << "                                %@@%%%::;                                  ___" << std::endl;
		file << "                                %@@@%(o);  ..'                            /   \\" << std::endl;
		file << "                                %@@@%(o);  .'                            /     \\" << std::endl;
		file << "                                %@@@o%;:(.,'                            | |\\ /| |" << std::endl;
		file << "                                %@@@o%;:(.                              | || || |" << std::endl;
		file << "                            `.. %@@@o%::;                               | || || |" << std::endl;
		file << "                              . %@@@o%::;                               | |/ \\| |" << std::endl;
		file << "                               `)@@@o%::;                                \\     / " << std::endl;
		file << "                                %@@@o%::;                               \\ \\   / /" << std::endl;
		file << "                                %@@(o)::;                                \\ \\ / /  " << std::endl;
		file << "                               .%@@@@%::;                                 \\   / " << std::endl;
		file << "                               ;%@@@@%::;.                                 \\ /  " << std::endl;
		file << "                              ;%@@@@%%:;;;.                                 X   " << std::endl;
		file << "                          ...;%@@@@@%%:;;;;,..                             / \\  " << std::endl;
		file << "                                                                          /   \\" << std::endl;
		file << "                                                                         /     \\" << std::endl;
		file.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
}

