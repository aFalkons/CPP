/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:36:10 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/16 17:59:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include	"Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool		sig;
	const int	siggrade;
	const int	exegrade;
public:
	//OCF
	AForm(std::string new_name, int min_grade_sig, int min_grade_exe);
	~AForm();
	AForm(const AForm &b);
	AForm&	operator=(const AForm &b);

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
			return("AForm Err : Grade Too High");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("AForm Err : Grade Too Low");
		}
	};

	class AFormAlreadySigned : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("AForm Err : AForm Already Signed");
		}
	};

	class AFormIsNotSigned : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return("AForm Err : AForm Is Not Signed");
		}
	};

	//function
	void	beSigned(Bureaucrat dkhead);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream &stream, const AForm &b);


#endif
