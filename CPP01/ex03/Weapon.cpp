/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:13:00 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/21 19:57:47 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp";

Weapon::Weapon()
{
	this->type = "null";
}

Weapon::~Weapon()
{
	;
}

void	Weapon::setType(std::string newtype)
{
	this->type = newtype;
}

const std::string	&Weapon::getType(void)
{
	return(this->type);
}
