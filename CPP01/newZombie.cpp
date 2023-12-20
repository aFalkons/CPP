/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:43:45 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/20 20:20:41 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{
	Zombie *nzombi = new Zombie;

	nzombi->setName(name);
	nzombi->Announce();
	return(nzombi);
}
