/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:18:39 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 00:38:56 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->setType("dog");
	std::cout << "Dog defoult costructor call" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog defoult distructor call" << std::endl;
}

Dog& Dog::operator=(const Dog &b)
{
	if (this == &b)
		return(*this);
	this->setType(b.getType());
	return(*this);
}

Dog::Dog(const Dog &b)
{
	if (this != &b)
		this->setType(b.getType());
	std::cout << "Dog copy costructor call" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "bau bau" << std::endl;
}
