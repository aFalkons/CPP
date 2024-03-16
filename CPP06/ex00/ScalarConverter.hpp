/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:31 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/15 17:31:00 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include	<string>
#include	<iostream>
#include	<stdexcept>
#include 	<stdlib.h>

class ScalarConverter
{
private:
	char		ConvChar;
	int			ConvInt;
	float		ConvFloat;
	double		ConvDouble;
	std::string	str;
public:
	ScalarConverter(std::string str);
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &b);
	ScalarConverter&	operator=(const ScalarConverter &b);

	// getter setter
	char		getConvChar() const;
	void		setConvChar(char newConvChar);
	int			getConvInt()const ;
	void		setConvInt(int newConvint);
	float		getConvFloat()const ;
	void		setConvFloat(float newConvfloat);
	double		getConvDouble()const ;
	void		setConvDouble(double newConvdouble);

	// funzioni
	void		ForConvInt(std::string newConvint);
};


#endif

