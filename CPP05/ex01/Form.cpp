/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:36:14 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/10 18:44:53 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(/* args */)
{

}

Form::~Form()
{

}

Form&	Form::operator=(const Form &b)
{

}

Form::Form(const Form &b)
{

}


std::string	Form::getName() const
{
	return(this->name);
}

void		Form::setName(std::string new_name)
{
	this->name = new_name;
}

bool		Form::getSig()
{
	return(this->sig);
}

void		Form::setSig(bool new_Sig)
{
	this->sig = new_Sig;
}

int			Form::getGrade()
{
	return(this->grade)
}

void		Form::setGrade(int new_Grade)
{
	this->grade = new_Grade;
}




