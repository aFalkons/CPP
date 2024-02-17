/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:11:38 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 09:12:15 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal *animals[50];
	// std::string tmp;
	for (int i = 0; i < 50; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 50; i++)
	{
		// tmp = 50 - i;
		if (i % 2 == 0)
			(animals[i]->getBrain()).setIdea(i,"fish");
		else
			(animals[i]->getBrain()).setIdea(i,"bone");
	}
	for (int i = 0; i < 50; i++)
		std::cout << i << " animal idea of a : " << animals[i]->getType() << " is " << (animals[i]->getBrain()).getIdea(i) << std::endl;
	for (int i = 0; i < 50; i++)
		delete animals[i];
	return (0);
}
