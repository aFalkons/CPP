/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 05:17:30 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/16 19:29:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat luca("luca", 1);
	std::cout << luca << std::endl;
	Bureaucrat ciro("ciro", 20);
	std::cout << ciro << std::endl;
	Bureaucrat beppe("beppe", -969572352);
	std::cout << beppe << std::endl;
	Bureaucrat cinzia("cinzia", 1410065408);
	std::cout << cinzia << std::endl;

	std::cout << "ciro grade " << ciro.getGrade() << std::endl;
	ciro.burInc();
	std::cout << "ciro grade " << ciro.getGrade() << std::endl;
	ciro.burDec();
	std::cout << "ciro grade " << ciro.getGrade() << std::endl;

	return(0);
}
