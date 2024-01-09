/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:12:33 by afalconi          #+#    #+#             */
/*   Updated: 2024/01/09 19:37:44 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include<unistd.h>

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
		else if (operation.compare("EXIT") == 0 || operation.size() == 0)
			loop = newPhone.exit();
		else
			std::cout << "invalid input =(" << std::endl;
	}
	return(0);
}
