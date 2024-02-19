/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:34:32 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/19 19:42:32 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string new_name)
{
	this->name = new_name;
}

Character::~Character()
{

}

std::string const & Character::getName() const
{
	return(this->name);
}

void		Character::equip(AMateria* m)
{

}

void		Character::unequip(int idx)
{

}

void		Character::use(int idx, ICharacter& target)
{

}

AMateria*	Character::clone()
{

}
