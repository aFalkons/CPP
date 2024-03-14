/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:46:54 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/13 16:38:57 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include<cstdlib>

class RobotomyRequestForm: public AForm
{
private:
	std::string	target;
public:
	RobotomyRequestForm(std::string newTarget);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &b);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm &b);

	void		setTarget(std::string newtarget);
	std::string	getTarget() const;

	void	execute(Bureaucrat const & executor) const;

};


#endif
