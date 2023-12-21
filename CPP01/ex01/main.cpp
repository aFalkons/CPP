/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:43:36 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/21 18:21:58 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie *z = zombieHorde(10 , "tumadre");
	for(int i = 0; i < 10; i++)
		z[i].Announce();
	delete[] z;
	return(0);
}
