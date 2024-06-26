/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:31 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/07 15:57:41 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include	<string>
#include	<iostream>
#include	<stdexcept>
#include 	<stdlib.h>
#include	<cstdlib>
#include	<cstring>
#include	<iostream>
#include	<sstream>
#include	<stdexcept>
#include	<bits/stdc++.h>

class ScalarConverter
{
private:
	char		ConvChar;
	int			ConvInt;
	float		ConvFloat;
	double		ConvDouble;
public:
	ScalarConverter();
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
	void		convert(std::string str);
	void		ckforprint(int c);
	void		ForConv(std::string str, int flag);

    class ScalarImpossibleConverter : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Scalar Err : Impossible Converter");
		}
	};
	class ScalarCharNotDisplay : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Scalar Err : Char Not Displayable");
		}
	};
	class ScalarPlusInf : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Scalar Err : Number Plus Infinity");
		}
	};
	class ScalarMinusInf : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Scalar Err : Number Minus Infinity");
		}
	};
	class ScalarNotANumebr : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Scalar Err : Not A Numebr");
		}
	};
};

#endif

