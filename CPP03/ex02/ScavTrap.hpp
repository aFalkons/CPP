/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:22:26 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/12 02:44:01 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool Gatekeeper;

public:
	ScavTrap();
	ScavTrap(std::string new_name);
	ScavTrap(const ScavTrap &b);
	ScavTrap& operator=(const ScavTrap &b);
	~ScavTrap();
	void guardGate();
	void	set_Gatek(bool new_gatek);
	bool	get_Gatek(void);
};

#endif
