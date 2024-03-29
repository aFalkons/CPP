/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 05:07:58 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/19 19:53:59 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->math_type = type;
}

std::string const & AMateria::getType() const
{
	return(this->math_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "nothing to use" << std::endl;
}
