/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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
class	AForm
{
	public:
	AForm(const string &name = "random form", int sign = 150, int exec = 150);
	AForm(const AForm&);
	AForm	&operator=(const AForm&);
	virtual ~AForm();

	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Error : Grade too high !");
			}
		
	};

	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Error : Grade too low !");
			}
		
	};
	class	NotSignedException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Error : AForm not signed !");
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
	virtual	void doJob(void) const = 0;	//Classe abstraite
};

std::ostream &operator<<(std::ostream &flux, const AForm &src);

#endif
