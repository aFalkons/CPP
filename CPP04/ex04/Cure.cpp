/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:28:25 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/19 19:47:26 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */) : AMateria("cure")
{

}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	// return(ret);
}

void Cure::use(ICharacter& target)
{
	std::cout  << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}
