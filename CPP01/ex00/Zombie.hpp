/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:43:57 by afalconi          #+#    #+#             */
/*   Updated: 2024/01/10 16:56:59 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	~Zombie();
	void		Announce(void);
	std::string	getName();
	void		setName(std::string newname);
};

#endif
