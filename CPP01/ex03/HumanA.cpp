/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:12:36 by afalconi          #+#    #+#             */
/*   Updated: 2024/01/10 17:20:48 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string newName, Weapon &newWeapon)
{
	this->name = newName;
	this->weaponA = &newWeapon;
}

HumanA::~HumanA()
{
	;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weaponA->getType() << std::endl;
}

Weapon	HumanA::getWeapon(void)
{
	return(*(this->weaponA));
}

void	HumanA::setWeapon(Weapon newWeapon)
{
	this->weaponA = &newWeapon;
	//printf("-%p \n", this->weaponA);
}
