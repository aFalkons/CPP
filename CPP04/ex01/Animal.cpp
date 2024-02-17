/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:15:09 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 07:23:16 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	this->setType("null");
	std::cout << "Animal defoult costructor call" << std::endl;
}

Animal::Animal(std::string new_type)
{
	this->setType(new_type);
	std::cout << "Animal defoult costructor call" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal defoult distructor call" << std::endl;
}

Animal& Animal::operator=(const Animal &b)
{
	if (this == &b)
		return(*this);
	this->setType(b.getType());
	return(*this);
}

Animal::Animal(const Animal &b)
{
	if (this != &b)
		this->setType(b.getType());
	std::cout << "Animal copy costructor call" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}

void		Animal::setType(std::string new_type)
{
	this->type = new_type;
}

void	Animal::makeSound() const
{
	std::cout << "bark bark" << std::endl;
}
