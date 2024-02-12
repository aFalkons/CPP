/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:22:29 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/12 03:03:43 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	this->set_Name(new_name);
	this->set_Attack(20);
	this->set_Health(100);
	this->set_Energy(50);
	this->set_Gatek(false);
	std::cout << "ScavTrap " << new_name << " is been constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &b) : ClapTrap(b)
{
	if (this != &b)
	{
		std::cout << "ScavTrap " << b.name << " construct and copy all the information to my brother" << std::endl;
		this->set_Attack(b.attackd);
		this->set_Energy(b.energy);
		this->set_Health(b.health);
		this->set_Name(b.name);
		this->set_Gatek(b.Gatekeeper);
	}
	else
	{
		std::cout << "ScavTrap " << b.name << " and ScavTrap " << this->get_Name() << " are this same" << std::endl;
	}
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->get_Name() << " bye bye" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &b)
{
	if (this != &b)
	{
		std::cout << "ScavTrap " << b.name << " now it is the same as the other one" << std::endl;
		this->set_Attack(b.attackd);
		this->set_Energy(b.energy);
		this->set_Health(b.health);
		this->set_Name(b.name);
		this->set_Gatek(b.Gatekeeper);
	}
	else
	{
		std::cout << "ScavTrap " << b.name << " and ScavTrap " << this->get_Name() << " are this same" << std::endl;
	}
	return(*this);
}

void	ScavTrap::set_Gatek(bool new_Gatek)
{
	this->Gatekeeper = new_Gatek;
}

bool	ScavTrap::get_Gatek()
{
	return(this->Gatekeeper);
}

void ScavTrap::guardGate()
{
	if (this->get_Gatek())
	{
		this->set_Gatek(false);
		std::cout << "ScavTrap " << this->get_Name() << " isn't now in Gatekeeper mode" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->get_Name() << " is now in Gatekeeper mode" << std::endl;
		this->set_Gatek(true);
	}
}
