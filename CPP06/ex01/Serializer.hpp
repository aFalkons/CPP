/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:19:09 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/27 18:30:22 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>

class Serializer
{
private:
	/* data */
public:
	Serializer(/* args */);
	~Serializer();
	Serializer(const Serializer &b);
	Serializer&	operator=(const Serializer &b);

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif

