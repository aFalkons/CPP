/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 04:42:25 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 08:58:41 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i ++)
		this->setIdea(i, "no idea");
	std::cout << "Brain defoult costructor call" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain defoult distructor call" << std::endl;
}

Brain& Brain::operator=(const Brain &b)
{
	if (&b == this)
		return(*this);
	for(int i = 0; i < 100; i ++)
		this->setIdea(i, b.getIdea(i));
	return(*this);
}

Brain::Brain(const Brain &b)
{
	if (&b == this)
		return ;
	for(int i = 0; i < 100; i ++)
		this->setIdea(i, b.getIdea(i));
}

Brain::Brain(std::string new_ideas[100])
{
	for(int i = 0; i < 100; i ++)
		this->setIdea(i, new_ideas[i]);
}

std::string	Brain::getIdea(int i) const
{
	return(this->ideas[i]);
}

void		Brain::setIdea(int i, std::string new_ideas)
{
	this->ideas[i] = new_ideas;
}

