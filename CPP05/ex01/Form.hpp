/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:36:10 by afalconi          #+#    #+#             */
/*   Updated: 2024/03/10 17:03:19 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include	<string>

class Form
{
private:
	std::string	name;
	bool		sig;
	const int	grade;
public:
	Form(/* args */);
	~Form();
	Form(const Form &b);
	Form&	operator=(const Form &b);

	std::string	getName() const;
	void		setName(std::string new_name);

	bool		getSig();
	void		setSig(bool new_Sig);

	int			getGrade();
	void		setGrade(int new_Grade);

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

#endif
