/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:17:07 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 00:39:15 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->setType("cat");
	std::cout << "Cat defoult costructor call" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat defoult distructor call" << std::endl;
}

Cat& Cat::operator=(const Cat &b)
{
	if (this == &b)
		return(*this);
	this->setType(b.getType());
	return(*this);
}

Cat::Cat(const Cat &b)
{
	if (this != &b)
		this->setType(b.getType());
	std::cout << "Cat copy costructor call" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "maio miao" << std::endl;
}
