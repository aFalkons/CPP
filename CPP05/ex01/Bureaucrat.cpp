	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 05:17:41 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/16 18:14:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string	new_name, int new_grade) : name(new_name)
{
	try
	{
		this->setGrade(new_grade);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		this->setGrade(1);
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		this->setGrade(150);
		std::cout << e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName(void) const
{
	return(this->name);
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	*this = b;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
    if (this != &b)
    {
        this->grade = b.grade;
    }
    return *this;
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
	catch(Bureaucrat::GradeTooHighException &e)
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
	catch(Bureaucrat::GradeTooLowException &e)
	{
		this->setGrade(150);
		std::cout << e.what() << std::endl;
	}
}


void		Bureaucrat::signForm(Form *f)
{
	try
	{
		(*f).beSigned(*this);
		std::cout << this->getName() << " signed " << (*f).getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<  this->getName() << " couldn’t sign " << (*f).getName()  << " because " << e.what() << std::endl;
	}
}
