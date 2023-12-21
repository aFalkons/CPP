/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:12:46 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/21 20:17:02 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string newName)
{
	this->name = newName;
}

HumanB::~HumanB()
{
	;
}

void	HumanB::attack(void)
{
	std::cout << this->name << "attacks with their" << this->weaponB.getType() << std::endl;
}

Weapon	HumanB::getWeapon(void)
{
	return(this->weaponB);
}

void	HumanB::setWeapon(Weapon newWeapon)
{
	this->weaponB = newWeapon;
}
