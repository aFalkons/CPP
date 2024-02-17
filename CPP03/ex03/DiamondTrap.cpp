/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:06:38 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/12 05:58:13 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string new_name) : ClapTrap(new_name), ScavTrap(new_name), FragTrap(new_name)
{
	this->set_Name(new_name + "_calp_name");
	this->set_DiamondName(new_name);
	this->set_Attack(this->ScavTrap::get_Attack());
	this->set_Health(this->FragTrap::get_Health());
	this->set_Energy(this->FragTrap::get_Energy());
	std::cout << "DiamondTrap " << new_name << " is been constructed" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap("null"), ScavTrap("null"), FragTrap("null")
{
	this->set_Name("null_calp_name");
	this->set_DiamondName("null");
	this->set_Attack(this->ScavTrap::get_Attack());
	this->set_Health(this->FragTrap::get_Health());
	this->set_Energy(this->FragTrap::get_Energy());
	std::cout << "DiamondTrap null is been constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &b) : ClapTrap(b), ScavTrap(b), FragTrap(b)
{
	if (this != &b)
	{
		std::cout << "DiamondTrap " << b.name << " construct and copy all the information to my brother" << std::endl;
		this->set_Attack(b.attackd);
		this->set_Energy(b.energy);
		this->set_Health(b.health);
		this->set_DiamondName(b.name);
		this->set_Name(b.ClapTrap::name);
	}
	else
	{
		std::cout << "DiamondTrap " << b.name << " and DiamondTrap " << this->get_Name() << " are this same" << std::endl;
	}
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->get_Name() << " bye bye" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &b)
{
	if (this != &b)
	{
		std::cout << "DiamondTrap " << b.name << " now it is the same as the other one" << std::endl;
		this->set_Attack(b.attackd);
		this->set_Energy(b.energy);
		this->set_Health(b.health);
		this->set_DiamondName(b.name);
		this->set_Name(b.ClapTrap::name);
	}
	else
	{
		std::cout << "DiamondTrap " << b.name << " and DiamondTrap " << this->get_Name() << " are this same" << std::endl;
	}
	return(*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "my DiamondTrap name is " << this->get_DiamondName() << " bat my Claptrap name is " << this->get_Name() << std::endl;
}

void		DiamondTrap::set_DiamondName(std::string new_name)
{
	this->name = new_name;
}
std::string	DiamondTrap::get_DiamondName(void)
{
	return(this->name);
}
