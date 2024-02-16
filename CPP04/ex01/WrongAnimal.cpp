/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:52:59 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 02:56:07 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->setType("null");
	std::cout << "WrongAnimal defoult costructor call" << std::endl;
}

WrongAnimal::WrongAnimal(std::string new_type)
{
	this->setType(new_type);
	std::cout << "WrongAnimal defoult costructor call" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal defoult distructor call" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &b)
{
	if (this == &b)
		return(*this);
	this->setType(b.getType());
	return(*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &b)
{
	if (this != &b)
		this->setType(b.getType());
	std::cout << "WrongAnimal copy costructor call" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}

void		WrongAnimal::setType(std::string new_type)
{
	this->type = new_type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "bark bark" << std::endl;
}
