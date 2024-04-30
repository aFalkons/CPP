/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:36:14 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/12 11:09:49 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string new_name, int min_grade_sig, int min_grade_exe): name(new_name), sig(false) , siggrade(min_grade_sig > 150 || min_grade_sig < 1 ? min_grade_sig > 150 ? 150 : 1 : min_grade_sig), exegrade(min_grade_exe > 150 || min_grade_exe < 1 ? min_grade_exe > 150 ? 150 : 1 : min_grade_exe)
{
	try
	{
		if (min_grade_sig < 1)
		{
			throw(AForm::GradeTooHighException());
		}
		else if (min_grade_sig > 150)
		{
			throw(AForm::GradeTooLowException());
		}
		else if (min_grade_exe < 1)
		{
			throw(AForm::GradeTooHighException());
		}
		else if (min_grade_sig > 150)
		{
			throw(AForm::GradeTooLowException());
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

AForm::~AForm()
{

}

AForm::AForm(const AForm &b): name(b.getName()), sig(b.getSig()), siggrade(b.getSigGrade()), exegrade(b.getExeGrade())
{

}

AForm&	AForm::operator=(const AForm &b)
{
	this->setSig(b.getSig());
	return(*this);
}

std::string	AForm::getName() const
{
	return(this->name);
}

void		AForm::setName(std::string new_name)
{
	this->name = new_name;
}

bool		AForm::getSig() const
{
	return(this->sig);
}

void		AForm::setSig(bool new_Sig)
{
	this->sig = new_Sig;
}

int			AForm::getSigGrade() const
{
	return(this->siggrade);
}

int			AForm::getExeGrade() const
{
	return(this->exegrade);
}

std::ostream&	operator<<(std::ostream &stream, const AForm &b)
{
	stream << "name : " << b.getName()
	<< std::endl << "grade required to sign it : " << b.getSigGrade()
	<< std::endl << "grade required to execute it: " << b.getExeGrade() << std::endl ;
	if (b.getSig() == false)
		stream << "nobody is signed" << std::endl;
	else
		stream << "sumbody is signed" << std::endl;
	return(stream);
}

void	AForm::beSigned(Bureaucrat dkhead)
{
	if (dkhead.getGrade() > this->getSigGrade())
		throw(AForm::GradeTooLowException());
	else if (this->getSig() == true)
		throw(AForm::AFormAlreadySigned());
	else
		this->setSig(true);
}
