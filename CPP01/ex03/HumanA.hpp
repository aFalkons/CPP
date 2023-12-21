/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:12:43 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/21 20:17:17 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.h"


class HumanA
{
private:
	Weapon		weaponA;
	std::string	name;
public:
	void	attack();
	void	setWeapon(Weapon newWeapon);
	Weapon	getWeapon(void);
	HumanA(std::string newName, Weapon newWeapon);
	~HumanA();
};

#endif
