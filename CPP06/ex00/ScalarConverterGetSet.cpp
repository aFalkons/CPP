/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterGetSet.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:41:17 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/15 14:41:18 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	
#include "ScalarConverter.hpp"
 
void	ScalarConverter::setConvChar(char ConvCharNew)
{
	this->ConvChar = ConvCharNew;
}
char	ScalarConverter::getConvChar() const
{
	return(this->ConvChar);
}
 
void	ScalarConverter::setConvInt(int ConvIntNew)
{
	this->ConvInt = ConvIntNew;
}
int	ScalarConverter::getConvInt() const
{
	return(this->ConvInt);
}
 
void	ScalarConverter::setConvFloat(float ConvFloatNew)
{
	this->ConvFloat = ConvFloatNew;
}
float	ScalarConverter::getConvFloat() const
{
	return(this->ConvFloat);
}
 
void	ScalarConverter::setConvDouble(double ConvDoubleNew)
{
	this->ConvDouble = ConvDoubleNew;
}
double	ScalarConverter::getConvDouble() const
{
	return(this->ConvDouble);
}
