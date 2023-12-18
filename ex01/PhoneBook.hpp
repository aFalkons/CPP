/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:12:38 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/18 20:34:33 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <Contact.hpp>


class PhoneBook
{
private:
	Contact	contact[8];
	int		cont_contact;
public:
	PhoneBook();
	int		add(Contact	new_contact);
	int		shearch();
	void	exit();
};

PhoneBook::PhoneBook() : cont_contact(0)
{

}

int		PhoneBook::add(Contact	new_contact)
{
	if((new_contact.get_number()) || (new_contact.get_d_secret()) || )
	if (cont_contact < 8)
	{
		cont_contact++;

	}
}

int	shearch()
{

}

void	exit()
{

}

#endif
