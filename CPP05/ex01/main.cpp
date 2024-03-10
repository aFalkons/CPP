/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 05:17:30 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/10 16:23:41 by afalconi         ###   ########.fr       */
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
	return(0);
}
