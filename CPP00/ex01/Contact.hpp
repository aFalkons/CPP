/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:12:41 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/19 15:52:02 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include	<string>

class Contact
{
private:
	std::string	number;
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	d_secret;
public:
	Contact();
	std::string	getNumber(void) const;
	void		setNumber(std::string new_num);

	std::string getFName(void) const;
	void		setFName(std::string new_name);

	std::string getLName(void) const;
	void		setLName(std::string new_name);

	std::string getNickname(void) const;
	void		setNickname(std::string new_name);

	std::string getDSecret(void) const;
	void		setDSecret(std::string new_name);
};

#endif
