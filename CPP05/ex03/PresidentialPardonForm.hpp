/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:46:52 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/13 15:56:13 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string	target;
public:
	PresidentialPardonForm(std::string newTarget);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &b);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm &b);

	void		setTarget(std::string newtarget);
	std::string	getTarget() const;

	void	execute(Bureaucrat const & executor) const;
};


#endif
