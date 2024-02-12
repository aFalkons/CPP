/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:11:38 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/12 03:06:09 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	action(ClapTrap *bot1, ClapTrap *bot2)
{
	int x;

	std::cout << "what he should do" << std::endl <<
	"1) attack" << std::endl <<
	"2) repaire" << std::endl ;
	std::cin>>x;
	if (x == 1)
	{
		bot1->attack(bot2->get_Name());
		bot2->takeDamage(bot1->get_Attack());
	}
	else if (x == 2)
		bot1->beRepaired(5);
	bot1->takeDamage(3);
}

int	main(void)
{
	std::string	name;
	int x;
	int	tourn;

	std::cout<<"Give the first claptrap a name ";
	std::cin>>name;

	ClapTrap bot1(name);
	std::cout<<"Give the seccond claptrap a name ";
	std::cin>>name;

	ClapTrap bot2(name);
	std::cout<<"how many shifts do you want to do ";
	std::cin>>tourn;
	for(int i = 0; i < tourn ; i++)
	{
		std::cout << "select who does something int the " << i << " turn" << std::endl
		<< "1) "<<bot1.get_Name() << std::endl << "2) "<<bot2.get_Name()<< std::endl;
		std::cin>>x;
		if (x == 1)
			action(&bot1, &bot2);
		else if (x ==2)
			action(&bot2, &bot1);
		else
			std::cout << "you lost a tourn" << std::endl;
	}
}
