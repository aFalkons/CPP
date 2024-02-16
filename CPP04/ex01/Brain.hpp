/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 04:42:26 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/16 05:42:46 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include	<string>
#include	<iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	virtual ~Brain();
	Brain& operator=(const Brain &b);
	Brain(const Brain &b);
	Brain(std::string new_ideas[100]);
	std::string	getIdea(int i) const;
	void		setIdea(int i, std::string new_idea);
};

#endif
