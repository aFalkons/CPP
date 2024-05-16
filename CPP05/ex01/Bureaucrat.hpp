/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 05:17:32 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/16 17:59:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include	<string>
#include	<iostream>
#include	<stdexcept>
#include	"Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int			grade;
public:
	//OCF
	Bureaucrat(/* args */);
	Bureaucrat(std::string	new_name, int new_grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat&	operator=(const Bureaucrat &b);

	//getter_sette
	std::string	getName(void) const;
	void		setName(std::string new_name);

 	int			getGrade(void) const;
	void		setGrade(int new_grade);

	//execption
	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Bureaucrat Err : Grade Too High");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Bureaucrat Err : Grade Too Low");
		}
	};

	//function
	void		burInc();
	void		burDec();
	void		signForm(Form *f);
};

std::ostream&	operator<<(std::ostream &stream, const Bureaucrat &b);

#endif
