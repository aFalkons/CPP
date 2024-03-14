/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:59:59 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/14 18:21:11 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNET_HPP
# define INTERNET_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern(/* args */);
	~Intern();
	Intern(const Intern &b);
	Intern&	operator=(const Intern &b);

	//AForm* makeForm(std::string const& form_name, std::string const& form_target);
	AForm*	makeForm(std::string FormName, std::string TargetName);

	class FormNameNotFound : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Intern Err : Form Name Not Found");
		}
	};
};


#endif
