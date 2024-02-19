/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:11:38 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/17 23:07:55 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	action(ScavTrap *Scav1, ScavTrap *Scav2)
{
	int x;

	std::cout << "what he should do" << std::endl <<
	"1) attack" << std::endl <<
	"2) repaire" << std::endl <<
	"3) Gatekeeper mode" << std::endl;
	std::cin>>x;
	if (x == 1 && Scav2->get_Gatek() != true)
	{
		Scav1->attack(Scav2->get_Name());
		Scav2->takeDamage(Scav1->get_Attack());
	}
	else if (x == 1 && Scav2->get_Gatek() == true)
	{
		std::cout << "ScavTrap : " << Scav2->get_Name() << " is in Gatekeeper mode" << std::endl;
	}
	else if (x == 2)
		Scav1->beRepaired(5);
	else if (x == 3)
		Scav1->guardGate();
	if (Scav1->get_Gatek() == false)
		Scav1->takeDamage(3);
}

ScavTrap setupScav()
{
	std::string	name;

	std::cout<<"Give the first Scavtrap a name ";
	std::cin>>name;
	ScavTrap Scav1(name);
	return(Scav1);
}

int	main(void)
{
	int x;
	int	tourn;

	ScavTrap Scav1 = setupScav();
	ScavTrap Scav2 = setupScav();
	std::cout<<"how many shifts do you want to do ";
	std::cin>>tourn;
	for(int i = 0; i < tourn && Scav1.get_Health() > 0 && Scav2.get_Health() > 0; i++)
	{
		std::cout << "select who does something int the " << i << " turn" << std::endl
		<< "1) "<< Scav1.get_Name() << std::endl
		<< "2) "<< Scav2.get_Name() << std::endl;
		std::cin>>x;
		if (x == 1)
			action(&Scav1, &Scav2);
		else if (x ==2)
			action(&Scav2, &Scav1);
		else
			std::cout << "you lost a tourn" << std::endl;
	}
	if (Scav1.get_Health() <= 0)
		std::cout <<  "ScavTrap " << Scav1.get_Name() << " he died, condolences" << std::endl;
	if (Scav2.get_Health() <= 0)
		std::cout <<  "ScavTrap " << Scav2.get_Name() << " he died, condolences" << std::endl;
}
