/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:17:51 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 00:44:01 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

using	std::string;
using	std::cout;
using	std::endl;
class	Bureaucrat;
class	Form
{
	public:
	Form(const string &name = "random form", int sign = 150, int exec = 150);
	Form(const Form&);
	Form	&operator=(const Form&);
	virtual ~Form();

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

	const string &getName() const;
	bool isSigned() const;
	int	getSignGrade() const;
	int getExecGrade() const;

	void	beSigned(Bureaucrat const &bur);
	void	execute(Bureaucrat const &executor) const;


	private:
	const string	_name;
	bool	_isSigned;
	const int	_signGrade;
	const int	_execGrade;
	virtual	void doJob(void) const = 0;
};

std::ostream &operator<<(std::ostream &flux, const Form &src);

#endif
