/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:12:54 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/27 16:47:37 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"

int main(void)
{
	{
		Weapon club = Weapon("giorgione");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("pummolo");
		bob.attack();
	}
	{
		Weapon club = Weapon("giorgione");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("pummolo");
		jim.attack();
	}
	return 0;
}
