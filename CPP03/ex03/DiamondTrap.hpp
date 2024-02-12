/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:06:42 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/12 05:53:56 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap(std::string new_name);
	DiamondTrap(const DiamondTrap &b);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap &b);
	void		whoAmI();
	void		set_DiamondName(std::string new_name);
	std::string	get_DiamondName(void);
};


#endif



