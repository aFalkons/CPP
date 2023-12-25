/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:13:05 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/25 20:16:31 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
private:
	std::string type;
public:
	void 				setType(std::string newType);
	const std::string	&getType(void);
	Weapon();
	Weapon(std::string newtype);
	~Weapon();
};

#endif
