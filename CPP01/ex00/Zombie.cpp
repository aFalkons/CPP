/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:43:50 by afalconi          #+#    #+#             */
/*   Updated: 2024/01/10 16:57:51 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "null";
}

Zombie::~Zombie()
{
	std::cout << getName() << " killed" << std::endl;
}

void		Zombie::Announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void)
{
	return(this->name);
}

void		Zombie::setName(std::string newname)
{
	this->name = newname;
}
