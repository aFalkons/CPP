/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:46:48 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/19 19:45:08 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(/* args */) : AMateria("ice")
{

}

Ice::~Ice()
{

}


AMateria* Ice::clone() const
{

}

void Ice::use(ICharacter& target)
{
	std::cout  << "* shoots an ice bolt at " << target.getName() << std::endl;
}
