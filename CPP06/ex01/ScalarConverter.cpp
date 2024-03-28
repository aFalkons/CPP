/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:33 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/28 09:30:35 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//carammelizaredajeromadaje@yopmail.com

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string str)
{
	std::cout << "char : ";
	try
	{
		ForConvChar(str);
		std::cout << "\'" <<  this->getConvChar() << "\'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::string tmp = "Scalar Err : Char Not Displayable";
		if (e.what() == tmp)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	std::cout << "int : ";
	try
	{
		ForConvInt(str);
		std::cout << this->getConvInt() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "float : ";
	try
	{
		ForConvFloat(str);
		if (this->getConvFloat() == (int)this->getConvFloat())
			std::cout << this->getConvFloat() << ".0f" <<  std::endl;
		else
			std::cout << this->getConvFloat() << "f" <<  std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "double : ";
	try
	{
		ForConvDouble(str);
		if (this->getConvDouble() == (int)this->getConvDouble())
			std::cout << this->getConvDouble() << ".0" <<  std::endl;
		else
			std::cout << this->getConvDouble() <<  std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
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

void		ScalarConverter::ForConvChar(std::string newConvChar)
{

	if (newConvChar.size() == 1 && !std::isdigit(newConvChar[0]))
		this->setConvChar(newConvChar[0]);
	else
	{
		int tmp = atoi(newConvChar.c_str());
		if ((tmp == 0 && newConvChar != "0") || tmp < 0)
			throw ScalarImpossibleConverter();
		else if (tmp < 32 || tmp > 127)
			throw ScalarCharNotDisplay();
		else
			this->setConvChar(tmp);
	}
}

void	ScalarConverter::ForConvInt(std::string newConvint)
{
	float i = atof(newConvint.c_str());
	if (i == 0 && newConvint[0] != '0')
		throw ScalarConverter::ScalarImpossibleConverter();
	this->setConvInt((int)i);
}

void		ScalarConverter::ForConvFloat(std::string newConvFloat)
{
	float i = std::atof(newConvFloat.c_str());
	if (i == 0 && newConvFloat[0] != '0')
		throw ScalarConverter::ScalarImpossibleConverter();
	this->setConvFloat(i);
}

void		ScalarConverter::ForConvDouble(std::string newConvDouble)
{
	double i = (double)std::atof(newConvDouble.c_str());
	if (i == 0 && newConvDouble[0] != '0')
		throw ScalarConverter::ScalarImpossibleConverter();
	this->setConvDouble(i);
}
