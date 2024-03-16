/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:33 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/15 21:13:05 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string str)
{
	try
	{
		ForConvInt(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &b)
{
	*this = b;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &b)
{
	this->setConvChar(b.getConvChar());
	this->setConvDouble(b.getConvDouble());
	this->setConvFloat(b.getConvFloat());
	this->setConvInt(b.getConvInt());
	return(*this);
}

void	ScalarConverter::ForConvInt(std::string newConvint)
{
	this->setConvInt(i);
}
