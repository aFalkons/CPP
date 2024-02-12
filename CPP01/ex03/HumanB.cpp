/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:12:46 by afalconi          #+#    #+#             */
/*   Updated: 2024/01/10 17:26:10 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string newName)
{
	this->name = newName;
	this->weaponB = NULL;
}

HumanB::~HumanB()
{
	;
}

void	HumanB::attack(void)
{
	if (this->weaponB == NULL)
		std::cout << this->name << " attacks with their hand" << std::endl;
	else
		std::cout << this->name << " attacks with their " << (*(this->weaponB)).getType() << std::endl;
}

Weapon	HumanB::getWeapon(void)
{
	return(*(this->weaponB));
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->weaponB = &newWeapon;
}
