/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:12:21 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 08:13:50 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include	<string>
#include	<iostream>
#include	"Brain.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal& operator=(const Animal &b);
	Animal(const Animal &b);
	Animal(std::string new_type);
	std::string		getType() const;
	void			setType(std::string new_type);
	virtual void	makeSound() const;
	virtual Brain&	getBrain(void) const = 0;
};


#endif
