/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:28:54 by afalconi          #+#    #+#             */
/*   Updated: 2024/02/11 23:55:43 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include	<string>
#include	<iostream>

class ClapTrap
{
private:
	std::string	name;
	int			health;
	int			energy;
	int			attackd;
public:
	ClapTrap(std::string new_name);
	ClapTrap(const ClapTrap &b);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap &b);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		ckEnergy();
	// getter e setter;
	void		set_Name(std::string new_name);
	std::string	get_Name(void);
	void		set_Health(int new_health);
	int			get_Health(void);
	void		set_Attack(int new_attack);
	int			get_Attack(void);
	void		set_Energy(int new_energy);
	int			get_Energy(void);
};


#endif
