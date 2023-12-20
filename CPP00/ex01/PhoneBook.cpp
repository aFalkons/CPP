/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:23:59 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/20 17:12:13 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->full = false;
	this->contContact = 0;
}

int		PhoneBook::add(void)
{
	std::string tmp;

	std::cout << "inserisci numero" << contContact << std::endl;
	getline(std::cin, tmp);
	this->contact[contContact].setNumber(tmp);

	std::cout << "inserisci f_name" << std::endl;
	getline(std::cin, tmp);
	this->contact[contContact].setFName(tmp);

	std::cout << "inserisci l_name" << std::endl;
	getline(std::cin, tmp);
	this->contact[contContact].setLName(tmp);

	std::cout << "inserisci nickname" << std::endl;
	getline(std::cin, tmp);
	this->contact[contContact].setNickname(tmp);

	std::cout << "inserisci d_secret" << std::endl;
	getline(std::cin, tmp);
	this->contact[contContact].setDSecret(tmp);


	if(((this->contact[contContact].getNumber()).empty()) || ((this->contact[contContact].getFName()).empty()) || ((this->contact[contContact].getLName()).empty())
		|| ((this->contact[contContact].getDSecret()).empty()) || ((this->contact[contContact].getNickname()).empty()))
	{
		this->contact[contContact].setNumber("");
		this->contact[contContact].setFName("");
		this->contact[contContact].setLName("");
		this->contact[contContact].setNickname("");
		this->contact[contContact].setDSecret("");
		return(std::cout << "uno dei parametri e nullo" << std::endl, 1);
	}
	if (contContact < 7)
		contContact++;
	else
	{
		full = true;
		contContact = 0;
	}
	return(0);
}

void	PhoneBook::printH()
{
	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|              PhoneBouk Usrs               |" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|   INDEX  |FIRST_NAME|LAST__NAME|  SECRET  |" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
}

void	PhoneBook::printField(std::string tmp)
{
		std::cout << "|";
		if (tmp.size() <= 10 )
			std::cout << std::setw(10) << tmp;
		else
			std::cout << tmp.erase(9) << ".";
}

void	PhoneBook::printInfo()
{
	for(int i = 0; i < (full ? 8 : this->contContact); i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		printField(this->contact[i].getFName());
		printField(this->contact[i].getLName());
		printField(this->contact[i].getNickname());
		std::cout << "|" << std::endl;
		std::cout << "*-------------------------------------------*" << std::endl;
	}
}

void	PhoneBook::shearch()
{
	bool			numvalid;
	std::string		num;
	int				ck;

	ck = 1;
	numvalid = true;
	this->printH();
	this->printInfo();
	while(numvalid)
	{
		if (this->contContact == 0)
			break;
		std::cout << "Shearch>";
		getline(std::cin, num);
		for(int i = 1; i < 9 && ck != 0 && (i <= this->contContact || this->full == true) ; i++)
			ck = num.compare(std::to_string(i));
		if (ck == 0)
		{
			std::cout << "User found      " << std::endl;
			std::cout << "First name:     " << this->contact[stoi(num) - 1].getFName() << std::endl;
			std::cout << "Last name:      " << this->contact[stoi(num) - 1].getLName() << std::endl;
			std::cout << "Nickname:       " << this->contact[stoi(num) - 1].getNickname() << std::endl;
			std::cout << "Phone number:   " << this->contact[stoi(num) - 1].getNumber() << std::endl;
			std::cout << "Darkest secret: " << this->contact[stoi(num) - 1].getDSecret() << std::endl;
			numvalid = false;
		}
		else
			std::cout << "invalid input" << std::endl;
	}
}

bool	PhoneBook::exit()
{
	return(false);
}
