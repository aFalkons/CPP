/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:17:11 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 05:52:51 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *cat_brain;
public:
	Cat();
	~Cat();
	Cat& operator=(const Cat &b);
	Cat(const Cat &b);
	void		makeSound() const;
};


#endif
