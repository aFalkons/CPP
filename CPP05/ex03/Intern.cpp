/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:59:58 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/14 18:46:22 by afalconi         ###   ########.fr       */
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

//AForm* Intern::makeForm(std::string const& form_name, std::string const& target_name)
//{
//    std::string available_forms[3] = {"Presidential pardon", "Robotomy request", "Shrubbery creation"};
//    int i = -1;
//
//    while (++i < 3)
//    {
//        if (form_name.compare(available_forms[i]) == 0)
//            break ;
//    }
//
//    try
//    {
//        switch (i + 1)
//        {
//            case 1:
//                return (new PresidentialPardonForm(target_name));
//                break;
//            case 2:
//                return (new RobotomyRequestForm(target_name));
//                break;
//            case 3:
//                return (new ShrubberyCreationForm(target_name));
//                break;
//            default:
//                throw FormNotFoundException();
//        }
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what();
//        throw;
//    }
//
//    return nullptr;
//}

