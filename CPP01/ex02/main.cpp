/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:43:36 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/12 14:07:38 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "The memory address of the string variable : " << &str << std::endl
	<< "The memory address held by stringPTR : " << &stringPTR << std::endl
	<< "The memory address held by stringREF : " << &stringREF << std::endl
	<< "The value of the string variable : " << str << std::endl
	<< "The value pointed to by stringPTR : " << stringPTR << std::endl
	<< "The value pointed to by stringREF : " << stringREF << std::endl;
	return(0);
}
