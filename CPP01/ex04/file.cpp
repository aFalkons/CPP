/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:47:25 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/27 17:12:25 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

void		file::setFd(std::fstream *newFd)
{
	this->fd = newFd;
}

std::fstream	*file::getFd()
{
	return(this->fd);
}

void		file::setFilename(std::string newFile)
{
	this->fileName = newFile;
}

std::string	file::getFilename()
{
	return(this->fileName);
}

file::file()
	: fd()
{
	this->setFilename("null");
}

file::~file()
{
	;
}
