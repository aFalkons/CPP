/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 05:17:41 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/10 16:18:36 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
	this->setName("null");
	this->setGrade(150);
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string	new_name, int new_grade)
{
	this->setName(new_name);
	try
	{
		this->setGrade(new_grade);
	}
	catch(Bureaucrat::GradeTooHighException e)
	{
		this->setGrade(1);
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e)
	{
		this->setGrade(150);
		std::cout << e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName(void) const
{
	return(this->name);
}

void		Bureaucrat::setName(std::string new_name)
{
	this->name = new_name;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	*this = b;
}

Bureaucrat&  Bureaucrat::operator=(const Bureaucrat &b)
{
	this->setName(b.getName());
	try
	{
		this->setGrade(b.getGrade());
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(*this);
}

int			Bureaucrat::getGrade(void) const
{
	return(this->grade);
}

void		Bureaucrat::setGrade(int new_grade)
{
	if (new_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	else if (new_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->grade = new_grade;
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &b)
{
	stream << b.getName() << " , bureaucrat grade " << b.getGrade() << std::endl;
	return(stream);
}

void		Bureaucrat::burInc()
{
	try
	{
		this->setGrade(this->getGrade() - 1);
	}
	catch(Bureaucrat::GradeTooHighException e)
	{
		this->setGrade(1);
		std::cout << e.what() << std::endl;
	}
}

void		Bureaucrat::burDec()
{
	try
	{
		this->setGrade(this->getGrade() + 1);
	}
	catch(Bureaucrat::GradeTooLowException e)
	{
		this->setGrade(150);
		std::cout << e.what() << std::endl;
	}
}

