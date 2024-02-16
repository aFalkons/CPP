/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:53:01 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 02:54:21 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->setType("WrongCat");
	std::cout << "WrongCat defoult costructor call" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat defoult distructor call" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &b)
{
	if (this == &b)
		return(*this);
	this->setType(b.getType());
	return(*this);
}

WrongCat::WrongCat(const WrongCat &b)
{
	if (this != &b)
		this->setType(b.getType());
	std::cout << "WrongCat copy costructor call" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat maio miao" << std::endl;
}

