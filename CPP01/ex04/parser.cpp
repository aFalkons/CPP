/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:06:45 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/28 17:27:04 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

void	set_up_file_out(file *fil, file *fil_out)
{
	std::fstream fd;
	std::string filename = fil->getFilename();
	size_t pos = filename.find(".", 0);
	if (pos != std::string::npos)
		filename.erase(pos);
	filename += ".replace";
	fd.open(filename, std::fstream::out);
	fil_out->setFd(&fd);
	fil_out->setFilename(filename);
}

int		parser_for_1(char	*av[], file *fil, std::string *s1, std::string *s2, file *fil_out)
{
	std::fstream fd;
	std::string string;
	std::string split = av[1];
	std::istringstream iss(split);
	iss >> string;
	fd.open(string, std::fstream::in | std::fstream::out | std::fstream::app);
	if (!fd.is_open())
		return(1);
	fd.close();
	fil->setFilename(string);
	fil->setFd(&fd);
	iss >> *s1;
	iss >> *s2;
	iss >> string;
	if (!string.empty() || s1->empty() || s2->empty())
		return(2);
	set_up_file_out(fil, fil_out);
	return(0);
}

int		parser_for_4(char	*av[], file *fil, std::string *s1, std::string *s2, file *fil_out)
{
	std::fstream fd;
	fd.open(av[1], std::fstream::in | std::fstream::out | std::fstream::app);
	if (!fd.is_open())
		return(1);
	fd.close();
	fil->setFilename(av[1]);
	fil->setFd(&fd);
	*s1 = av[2];
	*s2 = av[3];
	set_up_file_out(fil, fil_out);
	return(0);
}
