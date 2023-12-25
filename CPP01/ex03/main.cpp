/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:12:54 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/25 20:20:07 by afalconi         ###   ########.fr       */
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

///Users/afalconi/Desktop/42/Progetti/gpanico/CPP/_01/ex03
///Users/afalconi/Desktop/42/Progetti/CPP00/CPP01/ex03
