/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:12:38 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/19 19:22:59 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
private:
	Contact	contact[8];
	int		contContact;
	void	printH();
	void	printInfo();
	void	printField(std::string tmp);
	bool	full;
public:
	PhoneBook();
	int		add();
	void	shearch();
	bool	exit();

};

#endif
