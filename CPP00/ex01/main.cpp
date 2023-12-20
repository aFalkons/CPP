/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:12:33 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/19 19:36:14 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	newPhone;
	bool		loop;
	std::string	operation;

	loop = true;
	while(loop)
	{
		std::cout << "PhoneBook > ";
		getline(std::cin, operation);
		if (operation.compare("ADD") == 0)
			newPhone.add();
		else if (operation.compare("SEARCH") == 0)
			newPhone.shearch();
		else if (operation.compare("EXIT") == 0)
			loop = newPhone.exit();
		else
			std::cout << "invalid input =(" << std::endl;
	}
	return(0);
}
