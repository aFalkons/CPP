/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:18:39 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 08:10:46 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->dog_brain = new Brain();
	this->setType("dog");
	std::cout << "Dog defoult costructor call" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog defoult distructor call" << std::endl;
	delete  this->dog_brain;
}

Dog& Dog::operator=(const Dog &b)
{
	if (this == &b)
		return(*this);
	this->setType(b.getType());
	*(this->dog_brain) = b.getBrain();
	return(*this);
}

Dog::Dog(const Dog &b)
{
	if (this != &b)
	{
		this->setType(b.getType());
		*(this->dog_brain) = b.getBrain();
	}
	std::cout << "Dog copy costructor call" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "bau bau" << std::endl;
}

Brain&	Dog::getBrain() const
{
	return(*(this->dog_brain));
}
