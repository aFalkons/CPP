/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:52:57 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 10:08:33 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include	<iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal &b);
	WrongAnimal(const WrongAnimal &b);
	WrongAnimal(std::string new_type);
	std::string		getType() const;
	void			setType(std::string new_type);
	void			makeSound() const;
};


#endif
