/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:47:15 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/27 17:12:57 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>


class file
{
private:
	std::string		fileName;
	std::fstream	*fd;
public:
	void			setFilename(std::string newFile);
	std::string		getFilename(void);
	void			setFd(std::fstream *newFd);
	std::fstream	*getFd(void);
	file();
	~file();
};

#endif

