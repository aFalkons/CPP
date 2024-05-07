/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:59:58 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/07 17:32:01 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(/* args */)
{
	std::cout << "Intern costructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern distructor called" << std::endl;
}

Intern::Intern(const Intern &b)
{
	*this = b;
}

Intern&	Intern::operator=(const Intern &b)
{
	(void)b;
	return(*this);
}

AForm*	Intern::makeForm(std::string FormName, std::string TargetName)
{
	try
	{
		if (FormName.compare("Shrubbery Creation Form"))
		{
			return(new ShrubberyCreationForm(TargetName));
		}
		if (FormName.compare("Robotomy Request Form"))
		{
			return(new RobotomyRequestForm(TargetName));
		}
		if (FormName.compare("Presidential Pardon Form"))
		{
			return(new PresidentialPardonForm(TargetName));
		}
		throw(Intern::FormNameNotFound());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return(NULL);
}
