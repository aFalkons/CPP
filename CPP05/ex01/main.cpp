/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 05:17:30 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/12 10:42:02 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

	Form form1("gattini e quaricini", 1120, 90);
	std::cout << form1;
	Form form2("contratto di condominio", 80, 90);
	std::cout << form2;
	Form form3("vendita armi", 10, 90);
	std::cout << form3;
	Form form4("11 settembre", -11092001, 90);
	std::cout << form4;

	std::cout << std::endl;

	cinzia.signForm(&form2);
	ciro.signForm(&form4);
	beppe.signForm(&form4);
	beppe.signForm(&form4);

	return(0);
}
