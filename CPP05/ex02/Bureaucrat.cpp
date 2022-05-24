/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:41:25 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 00:14:48 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string &name, int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& toCopy): _name(toCopy._name)
{
	if (toCopy._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (toCopy._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = toCopy._grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &toAssign)
{
	this->_name = toAssign._name;
	this->_grade = toAssign._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

string	const&	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::upgrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::downgrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (o);
}

void	Bureaucrat::signForm(Form &form) const
{
	if (this->_grade <= form.getSignGrade())
	{
		form.beSigned(*this);
		cout << this->_name << " signed " << form.getName() << endl;
	}
	else
		cout << this->_name << " couldn't sign " << form.getName() << " because grade is too low" << endl;
}

void	Bureaucrat::executeForm(Form const &form) const
{
	if (form.isSigned())
		form.execute(*this);
}
