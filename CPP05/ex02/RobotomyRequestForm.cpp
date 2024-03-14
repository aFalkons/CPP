/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:47:52 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/13 17:02:17 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget): AForm("Robotomy Request Form", 72, 45)
{
	this->setTarget(newTarget);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &b)
{
	if (this == &b)
		return(*this);
	this->setTarget(b.getTarget());
	return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &b): AForm("Robotomy Request Form", 72, 45)
{
	*this = b;
}

void		RobotomyRequestForm::setTarget(std::string newtarget)
{
	this->target = newtarget;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return(this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
		try
	{
		if (executor.getGrade() > this->getExeGrade())
			throw(AForm::GradeTooLowException());
		else if (this->getSig() == false)
			throw(AForm::AFormIsNotSigned());
		std::cout << "\a";
		if (rand() % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized" << std::endl;
		else
			std::cout << this->getTarget() << " has not been robotomized" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
}
