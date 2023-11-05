/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:17:51 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 23:47:11 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class	Bureaucrat;
class	Form
{
	public:
	Form(const std::string &name = "random form", int sign = 150, int exec = 150);
	Form(const Form&);
	Form	&operator=(const Form&);//useless ?
	~Form();

	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Exception Form : Grade too high !");
			}
		
	};

	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Exception Form : Grade too low !");
			}
		
	};

	const std::string &getName() const;
	bool isSigned() const;
	int	getSignGrade() const;
	int getExecGrade() const;

	void	beSigned(Bureaucrat const &bur);

	private:
	const std::string	_name;
	bool	_isSigned;
	const int	_signGrade;
	const int	_execGrade;
};

std::ostream &operator<<(std::ostream &flux, const Form &src);

#endif
