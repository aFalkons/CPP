/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:00 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/07 16:05:09 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	ScalarConverter b;
	if (ac != 2)
		return 1;
	std::cout << "________ "<< av[1] << " ________" << std::endl;
	b.convert(av[1]);
	std::cout << "______________________" << std::endl;
}
