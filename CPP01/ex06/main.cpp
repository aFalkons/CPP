/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:46:39 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/29 20:28:54 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char *av[])
{
	Harl		harl;
	std::string	level;

	if (ac != 2)
		return (std::cout << "Usage Error: ./Harl [command]" << std::endl, 1);
	level = av[1];
	harl.complain(level);
	return (0);
}
