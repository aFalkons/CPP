/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 05:17:30 by afalconi          #+#    #+#             */
/*   Updated: 2024/04/30 17:58:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"


int	main(void)
{
	Bureaucrat luca("luca", 1);
	std::cout << luca;
	Bureaucrat ciro("ciro", 20);
	std::cout << ciro;
	Bureaucrat beppe("beppe", -969572352);
	std::cout << beppe;
	Bureaucrat cinzia("cinzia", 1410065408);
	std::cout << cinzia;

	std::cout << std::endl;

	ShrubberyCreationForm form1("albero1");
	form1.execute(cinzia);
	form1.execute(ciro);
	form1.beSigned(ciro);
	form1.execute(ciro);

	std::cout << std::endl;

	RobotomyRequestForm form2("mcamilli");
	form2.execute(cinzia);
	form2.execute(ciro);
	form2.beSigned(ciro);
	form2.execute(ciro);

	std::cout << std::endl;

	PresidentialPardonForm form3("mcamilli");
	form3.execute(cinzia);
	form3.execute(luca);
	form3.beSigned(luca);
	form3.execute(luca);

	std::cout << std::endl;

	Intern Bobby;

	delete Bobby.makeForm("ensomma", "dajeromadaje");
	delete Bobby.makeForm("Presidential pardon", "");

	return(0);
}
