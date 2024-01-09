/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:23:08 by afalconi          #+#    #+#             */
/*   Updated: 2024/01/09 21:38:04 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
	if (ac == 1)
		return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	(*av ++);
	while(*av)
	{
		for(int i = 0; (*av)[i]; i++)
			std::cout << (char)std::toupper((*av)[i]);
		(*av ++);
	}
	std::cout << std::endl;
	return 0;
}

