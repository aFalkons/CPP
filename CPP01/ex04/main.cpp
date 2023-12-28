/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:37:26 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/28 17:37:11 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int	main(int ac, char	*av[])
{
	int			ck;
	file		fil_in;
	file		fil_out;
	std::string s1;
	std::string s2;
	std::string	all_text;
	char		line;
	size_t		index;

	ck = 0;
	if (ac > 4 || ac == 1 || ac == 3)
		return(std::cout << "ERROR: bad input" << std::endl, 1);
	if (ac == 2)
		ck = parser_for_1(av, &fil_in, &s1, &s2, &fil_out);
	else
		ck = parser_for_4(av, &fil_in, &s1, &s2, &fil_out);
	if (ck == 1)
		return(std::cout << "ERROR: file dosent exist" << std::endl, 1);
	else if (ck == 2)
		return(std::cout << "ERROR: to mach or to less argument" << std::endl, 1);
	std::ifstream fin(fil_in.getFilename());
	while(fin.get(line))
		all_text += line;
	fin.close();
	while(true)
	{
		index = all_text.find(s1, 0);
		if (index == std::string::npos)
			break;
		all_text.erase(index, s1.size());
		all_text.insert(index, s2);
	}
	std::ofstream	fout(fil_out.getFilename());
	fout << all_text;
	fout.close();
	return(0);
}
///Users/afalconi/Desktop/42/Progetti/gpanico/CPP/_01/ex03
///Users/afalconi/Desktop/42/Progetti/CPP00/CPP01/ex03
