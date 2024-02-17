/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:18:36 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 06:53:04 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
private:
	Brain *dog_brain;

public:
	Dog();
	~Dog();
	Dog& operator=(const Dog &b);
	Dog(const Dog &b);
	void		makeSound() const;
	Brain&	getBrain() const;
};

#endif
