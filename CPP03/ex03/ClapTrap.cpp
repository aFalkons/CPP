/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:11:09 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/12 01:07:04 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name)
{
	this->set_Name(new_name);
	this->set_Attack(0);
	this->set_Health(10);
	this->set_Energy(10);
	std::cout << "ClapTrap " << new_name << " is been constructed" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->set_Name("null");
	this->set_Attack(0);
	this->set_Health(10);
	this->set_Energy(10);
	std::cout << "ClapTrap null is been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &b)
{
	if (this != &b)
	{
		std::cout << "ClapTrap " << b.name << " construct and copy all the information to my brother" << std::endl;
		this->set_Attack(b.attackd);
		this->set_Energy(b.energy);
		this->set_Health(b.health);
		this->set_Name(b.name);
	}
	else
	{
		std::cout << "ClapTrap " << b.name << " and ClapTrap " << this->get_Name() << " are this same" << std::endl;
	}
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->get_Name() << " bye bye" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &b)
{
	if (this != &b)
	{
		std::cout << "ClapTrap " << b.name << " now it is the same as the other one" << std::endl;
		this->set_Attack(b.attackd);
		this->set_Energy(b.energy);
		this->set_Health(b.health);
		this->set_Name(b.name);
	}
	else
	{
		std::cout << "ClapTrap " << b.name << " and ClapTrap " << this->get_Name() << " are this same" << std::endl;
	}
	return(*this);
}

int	ClapTrap::ckEnergy()
{
	if (this->get_Energy() > 0)
		return(0);
	std::cout << "bzz ... bzz ... no Energy" << std::endl;
	return(1);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->ckEnergy() == 1)
		return ;
	std::cout << "ClapTrap " << this->get_Name() << " attacks " << target << " , causing " << this->get_Attack() << " points of damage!" << std::endl;
	this->set_Energy(this->get_Energy() - 1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->ckEnergy() == 1)
		return ;
	std::cout << "ClapTrap " << this->get_Name() << " taking " << amount << " damage" << std::endl;
	this->set_Health(this->get_Health() - amount);
	this->set_Energy(this->get_Energy() - 1);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->ckEnergy() == 1)
		return ;
	std::cout << "ClapTrap " << this->get_Name() << " fixing of " << amount << " damage" << std::endl;
	this->set_Health(this->get_Health() + amount);
	this->set_Energy(this->get_Energy() - 1);
}

void		ClapTrap::set_Name(std::string new_name)
{
	this->name = new_name;
}
std::string	ClapTrap::get_Name(void)
{
	return(this->name);
}
void		ClapTrap::set_Health(int new_health)
{
	this->health = new_health;
}
int			ClapTrap::get_Health(void)
{
	return(this->health);
}
void		ClapTrap::set_Attack(int new_attack)
{
	this->attackd = new_attack;
}
int			ClapTrap::get_Attack(void)
{
	return(this->attackd);
}

void		ClapTrap::set_Energy(int new_energy)
{
	this->energy = new_energy;
}
int			ClapTrap::get_Energy(void)
{
	return(this->energy);
}
