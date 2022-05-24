/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:41:34 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 00:05:00 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

using	std::string;
using	std::cout;
using	std::endl;
class	Form;
class	Bureaucrat
{
	public:
	Bureaucrat(const string &name = "bob", int grade = 150);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat	&operator=(const Bureaucrat&);
	~Bureaucrat();

	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Error : Grade too high !");
			}

	};
	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Error : Grade too low !");
			}

	};

	string const& getName() const;
	int	getGrade() const;
	void	upgrade();
	void	downgrade();

	void	signForm(Form &form) const;

	void	executeForm(Form const &form) const;

	private:
	string	_name;
	int		_grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);



#endif
