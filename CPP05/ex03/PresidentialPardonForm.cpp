/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:46:51 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/13 17:03:52 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget):  AForm("Presidential Pardon Form", 25, 5)
{
	this->setTarget(newTarget);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &b)
{
	if (this == &b)
		return(*this);
	this->setTarget(b.getTarget());
	return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &b): AForm("Presidential Pardon Form", 25, 5)
{
	*this = b;
}

void		PresidentialPardonForm::setTarget(std::string newtarget)
{
	this->target = newtarget;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return(this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (executor.getGrade() > this->getExeGrade())
			throw(AForm::GradeTooLowException());
		else if (this->getSig() == false)
			throw(AForm::AFormIsNotSigned());
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
}

