/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:12:41 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/18 20:29:04 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include	<string>

class Contact
{
private:
	int			number;
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	d_secret;
public:
	Contact();
	int		get_number(void) const;
	void	set_number(int new_num);

	std::string get_f_name(void) const;
	void		set_f_name(std::string new_name);

	std::string get_l_name(void) const;
	void		set_l_name(std::string new_name);

	std::string get_nickname(void) const;
	void		set_nickname(std::string new_name);

	std::string get_d_secret(void) const;
	void		set_d_secret(std::string new_name);
};

int	Contact::get_number() const
{
	return(number);
}

void	Contact::set_number(int new_num)
{
	number = new_num;
}

std::string Contact::get_f_name(void) const
{
	return(f_name);
}

void		Contact::set_f_name(std::string new_name)
{
	f_name = new_name;
}

std::string Contact::get_l_name(void) const
{
	return(l_name);
}

void		Contact::set_l_name(std::string new_name)
{
	l_name = new_name;
}

std::string Contact::get_nickname(void) const
{
	return(nickname);
}

void		Contact::set_nickname(std::string new_name)
{
	nickname = new_name;
}

std::string Contact::get_d_secret(void) const
{
	return(d_secret);
}

void		Contact::set_d_secret(std::string new_name)
{
	d_secret = new_name;
}

#endif
