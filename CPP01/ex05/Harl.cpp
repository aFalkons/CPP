/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:47:00 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/29 20:28:21 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void	(Harl::*tumadre) (void);

void	Harl::complain( std::string level )
{
	int id;

	if (!(level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR"))
	{
		std::cout << "ERROR: level not found" << std::endl;
		return ;
	}
	tumadre	pummolo[4];
	pummolo[0] = &Harl::warning;
	pummolo[1] = &Harl::debug;
	pummolo[2] = &Harl::error;
	pummolo[3] = &Harl::info;
	id = level[0] % 10 % 7;
	(this->*pummolo[id])();
	return ;
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(void)
{
	;
}

Harl::~Harl()
{
	;
}
