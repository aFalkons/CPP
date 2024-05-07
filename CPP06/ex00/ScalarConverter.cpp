/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:33 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/07 14:31:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//carammelizaredajeromadaje@yopmail.com

#include "ScalarConverter.hpp"

void	ScalarConverter::ckforprint(int c)
{
	if (c < 32 || c > 127)
		throw(ScalarConverter::ScalarCharNotDisplay());
	this->setConvChar((char)(c));
}

void	ScalarConverter::ForConv(std::string str, int flag)
{
	std::istringstream iss(str);
    double tmp;

	if (!(iss >> tmp))
		throw(ScalarConverter::ScalarImpossibleConverter());
	if (flag == 0)
	{
		this->ckforprint(static_cast<int>(tmp));
	}
	else if (flag == 1)
	{
		this->setConvInt(static_cast<int>(tmp));
	}
	else if (flag == 2)
	{
		this->setConvFloat(static_cast<float>(tmp));
	}
	else if (flag == 3)
	{
		this->setConvDouble(tmp);
	}
}

ScalarConverter::ScalarConverter(std::string str)
{
	if (str.compare("nan"))
	std::cout << "char : ";
	try
	{
		if (str.size() == 1)
			this->ckforprint(static_cast<int>(str[0]));
		else if (str.size() == 3 && (str[0] == 39 || str[0] == 34) && (str[2] == 39 || str[2] == 34) )
			this->ckforprint(static_cast<int>(str[1]));
		else
			ForConv(str, 0);
		std::cout << this->getConvChar() << std::endl;
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
		if (str.size() == 1)
			this->setConvInt(static_cast<int>(str[0]));
		else if (str.size() == 3 && (str[0] == 39 || str[0] == 34) && (str[2] == 39 || str[2] == 34) )
			this->setConvInt(static_cast<int>(str[1]));
		else
			ForConv(str, 1);
		std::cout << this->getConvInt() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "float : ";
	try
	{
		if (str == "+inff" || str == "+inf")
			throw(ScalarConverter::ScalarPlusInf());
		else if (str == "-inff" || str == "-inf")
			throw(ScalarConverter::ScalarMinusInf());
		else if (str == "nanf" || str == "nan")
			throw(ScalarConverter::ScalarNotANumebr());
		else if (str.size() == 1)
			this->setConvFloat(static_cast<float>(str[0]));
		else if (str.size() == 3 && (str[0] == 39 || str[0] == 34) && (str[2] == 39 || str[2] == 34) )
			this->setConvFloat(static_cast<float>(str[1]));
		else
			ForConv(str, 2);
		if (this->getConvFloat() == (int)this->getConvFloat())
			std::cout << this->getConvFloat() << ".0f" <<  std::endl;
		else
			std::cout << this->getConvFloat() << "f" <<  std::endl;
	}
	catch(const std::exception& e)
	{
		if (e.what() == std::string("Scalar Err : Not A Numebr"))
			std::cout << "nanf" << std::endl;
		else if (e.what() == std::string("Scalar Err : Number Minus Infinity"))
			std::cout << "-inff" << std::endl;
		else if (e.what() == std::string("Scalar Err : Number Plus Infinity"))
			std::cout << "+inff" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	std::cout << "double : ";
	try
	{
		if (str == "+inff" || str == "+inf")
			throw(ScalarConverter::ScalarPlusInf());
		else if (str == "-inff" || str == "-inf")
			throw(ScalarConverter::ScalarMinusInf());
		else if (str == "nanf" || str == "nan")
			throw(ScalarConverter::ScalarNotANumebr());
		else if (str.size() == 1)
			this->setConvDouble(static_cast<double>(str[0]));
		else if (str.size() == 3 && (str[0] == 39 || str[0] == 34) && (str[2] == 39 || str[2] == 34) )
			this->setConvDouble(static_cast<double>(str[1]));
		else
			ForConv(str, 3);
		if (this->getConvDouble() == (int)this->getConvDouble())
			std::cout << this->getConvDouble() << ".0" <<  std::endl;
		else
			std::cout << this->getConvDouble() <<  std::endl;
	}
	catch(const std::exception& e)
	{
		if (e.what() == std::string("Scalar Err : Not A Numebr"))
			std::cout << "nan" << std::endl;
		else if (e.what() == std::string("Scalar Err : Number Minus Infinity"))
			std::cout << "-inf" << std::endl;
		else if (e.what() == std::string("Scalar Err : Number Plus Infinity"))
			std::cout << "+inf" << std::endl;
		else
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