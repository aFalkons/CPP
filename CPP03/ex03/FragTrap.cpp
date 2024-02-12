/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:32:45 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/12 03:46:09 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	this->set_Name(new_name);
	this->set_Attack(30);
	this->set_Health(100);
	this->set_Energy(100);
	std::cout << "FragTrap " << new_name << " is been constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &b) : ClapTrap(b)
{
	if (this != &b)
	{
		std::cout << "FragTrap " << b.name << " construct and copy all the information to my brother" << std::endl;
		this->set_Attack(b.attackd);
		this->set_Energy(b.energy);
		this->set_Health(b.health);
		this->set_Name(b.name);
	}
	else
	{
		std::cout << "FragTrap " << b.name << " and FragTrap " << this->get_Name() << " are this same" << std::endl;
	}
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->get_Name() << " bye bye" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &b)
{
	if (this != &b)
	{
		std::cout << "FragTrap " << b.name << " now it is the same as the other one" << std::endl;
		this->set_Attack(b.attackd);
		this->set_Energy(b.energy);
		this->set_Health(b.health);
		this->set_Name(b.name);
	}
	else
	{
		std::cout << "FragTrap " << b.name << " and FragTrap " << this->get_Name() << " are this same" << std::endl;
	}
	return(*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout <<  "FragTrap " << this->get_Name() << " gess for high five" << std::endl;
}
