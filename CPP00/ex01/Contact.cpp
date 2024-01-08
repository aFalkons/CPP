/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:24:54 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/31 02:16:18 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	;
}

std::string	Contact::getNumber() const
{
	return(number);
}

void	Contact::setNumber(std::string new_num)
{
	number = new_num;
}

std::string Contact::getFName(void) const
{
	return(f_name);
}

void		Contact::setFName(std::string new_name)
{
	f_name = new_name;
}

std::string Contact::getLName(void) const
{
	return(l_name);
}

void		Contact::setLName(std::string new_name)
{
	l_name = new_name;
}

std::string Contact::getNickname(void) const
{
	return(nickname);
}

void		Contact::setNickname(std::string new_name)
{
	nickname = new_name;
}

std::string Contact::getDSecret(void) const
{
	return(d_secret);
}

void		Contact::setDSecret(std::string new_name)
{
	d_secret = new_name;
}
