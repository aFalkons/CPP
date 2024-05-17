/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 05:17:32 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/16 20:01:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include	<string>
#include	<iostream>
#include	<stdexcept>
#include	"AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string	name;
	int			grade;
public:
	Bureaucrat(/* args */);
	Bureaucrat(std::string	new_name, int new_grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat&	operator=(const Bureaucrat &b);


	std::string	getName(void) const;

 	int			getGrade(void) const;
	void		setGrade(int new_grade);

	void		burInc();
	void		burDec();
	void		signForm(AForm *f);
	void		executeForm(AForm const & form);


	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Err : Grade Too High");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Err : Grade Too Low");
		}
	};
};

std::ostream&	operator<<(std::ostream &stream, const Bureaucrat &b);

#endif

