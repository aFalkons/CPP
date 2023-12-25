/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:12:51 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/25 20:24:14 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.h"

class HumanB
{
private:
	Weapon		*weaponB;
	std::string	name;
public:
	void	attack();
	void	setWeapon(Weapon &newWeapon);
	Weapon	getWeapon(void);
	HumanB(std::string newName);
	~HumanB();
};

#endif
