/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:11:38 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/12 03:58:50 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	action(FragTrap *Frag1, FragTrap *Frag2)
{
	int x;

	std::cout << "what he should do" << std::endl <<
	"1) attack" << std::endl <<
	"2) repaire" << std::endl <<
	"3) high five" << std::endl;
	std::cin>>x;
	if (x == 1)
	{
		Frag1->attack(Frag2->get_Name());
		Frag2->takeDamage(Frag1->get_Attack());
	}
	else if (x == 2)
		Frag1->beRepaired(5);
	else if (x == 3)
		Frag1->highFivesGuys();
	Frag1->takeDamage(3);
}

FragTrap setupFrag()
{
	std::string	name;

	std::cout<<"Give the first Fragtrap a name ";
	std::cin>>name;
	FragTrap Frag1(name);
	return(Frag1);
}

int	main(void)
{
	int x;
	int	tourn;

	FragTrap Frag1 = setupFrag();
	FragTrap Frag2 = setupFrag();
	std::cout<<"how many shifts do you want to do ";
	std::cin>>tourn;
	for(int i = 0; i < tourn && Frag1.get_Health() > 0 && Frag2.get_Health() > 0; i++)
	{
		std::cout << "select who does something int the " << i << " turn" << std::endl
		<< "1) "<< Frag1.get_Name() << std::endl
		<< "2) "<< Frag2.get_Name() << std::endl;
		std::cin>>x;
		if (x == 1)
			action(&Frag1, &Frag2);
		else if (x ==2)
			action(&Frag2, &Frag1);
		else
			std::cout << "you lost a tourn" << std::endl;
	}
	if (Frag1.get_Health() <= 0)
		std::cout <<  "FragTrap " << Frag1.get_Name() << " he died, condolences" << std::endl;
	if (Frag2.get_Health() <= 0)
		std::cout <<  "FragTrap " << Frag2.get_Name() << " he died, condolences" << std::endl;
}
