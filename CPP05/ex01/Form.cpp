/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:36:14 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/12 10:41:47 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string new_name, int min_grade_sig, int min_grade_exe): name(new_name), sig(false) , siggrade(min_grade_sig > 150 || min_grade_sig < 1 ? min_grade_sig > 150 ? 150 : 1 : min_grade_sig), exegrade(min_grade_exe > 150 || min_grade_exe < 1 ? min_grade_exe > 150 ? 150 : 1 : min_grade_exe)
{
	try
	{
		if (min_grade_sig < 1)
		{
			throw(Form::GradeTooHighException());
		}
		else if (min_grade_sig > 150)
		{
			throw(Form::GradeTooLowException());
		}
		else if (min_grade_exe < 1)
		{
			throw(Form::GradeTooHighException());
		}
		else if (min_grade_sig > 150)
		{
			throw(Form::GradeTooLowException());
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form::~Form()
{

}

Form::Form(const Form &b): name(b.getName()), sig(b.getSig()), siggrade(b.getSigGrade()), exegrade(b.getExeGrade())
{

}

Form&	Form::operator=(const Form &b)
{
	this->setSig(b.getSig());
	return(*this);
}

std::string	Form::getName() const
{
	return(this->name);
}

void		Form::setName(std::string new_name)
{
	this->name = new_name;
}

bool		Form::getSig() const
{
	return(this->sig);
}

void		Form::setSig(bool new_Sig)
{
	this->sig = new_Sig;
}

int			Form::getSigGrade() const
{
	return(this->siggrade);
}

int			Form::getExeGrade() const
{
	return(this->exegrade);
}

std::ostream&	operator<<(std::ostream &stream, const Form &b)
{
	stream << "name : " << b.getName()
	<< " grade required to sign it : " << b.getSigGrade()
	<< " grade required to execute it: " << b.getExeGrade();
	if (b.getSig() == false)
		stream << " nobody is signed" << std::endl;
	else
		stream << " sumbody is signed" << std::endl;
	return(stream);
}

void	Form::beSigned(Bureaucrat dkhead)
{
	if (dkhead.getGrade() > this->getSigGrade())
		throw(Form::GradeTooLowException());
	else if (this->getSig() == true)
		throw(Form::FormAlreadySigned());
	else
		this->setSig(true);

}
