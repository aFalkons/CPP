/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:00 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/05 18:46:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "Usage: ./convert [value]" << std::endl;
		return 1;
	}
	try {
		std::cout << "________ "<< av[1] << " ________" << std::endl;
		ScalarConverter b(av[1]);
		std::cout << "______________________" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
