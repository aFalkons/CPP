/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:00 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/07 17:29:07 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Serializer	tmp;
	Data	base;
	Data	*ck;

	uintptr_t	serial;

	base.i = 42;
	base.f = 42.42f;
	base.d = 42.42;
	base.c = '*';

	std::cout << "original address : " << &base << std::endl;
	serial = tmp.serialize(&base);

	ck = tmp.deserialize(serial);
	std::cout << "old address : " << &base << " --- new address :" << ck << std::endl;
	return (0);
}
