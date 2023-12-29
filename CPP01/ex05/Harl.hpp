/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:47:31 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/28 18:08:02 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>


class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void	complain( std::string level );
			Harl(void);
			~Harl();
};


#endif
