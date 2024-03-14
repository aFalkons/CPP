/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:46:44 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/13 15:32:29 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm(std::string name);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &b);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &b);

	void		setTarget(std::string newtarget);
	std::string	getTarget() const;

	virtual void execute(Bureaucrat const & executor) const;
};


#endif
