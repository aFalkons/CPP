/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:36:10 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/16 18:00:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include	"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool		sig;
	const int	siggrade;
	const int	exegrade;
public:
	//OCF
	Form(std::string new_name, int min_grade_sig, int min_grade_exe);
	~Form();
	Form(const Form &b);
	Form&	operator=(const Form &b);

	//getter_sette
	std::string	getName() const;
	void		setName(std::string new_name);

	bool		getSig() const;
	void		setSig(bool new_Sig);

	int			getSigGrade() const ;
	int			getExeGrade() const ;

	//execption
	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Form Err : Grade Too High");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Form Err : Grade Too Low");
		}
	};

	class FormAlreadySigned : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("Form Err : Form Already Signed");
		}
	};

	//function
	void	beSigned(Bureaucrat dkhead);
};

std::ostream&	operator<<(std::ostream &stream, const Form &b);


#endif
