/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:17:57 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 00:41:46 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const string &name, int sign, int exec): _name(name), _isSigned(false), _signGrade(sign), _execGrade(exec)
{
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
}
Form::Form(const Form& toCopy): _name(toCopy._name), _isSigned(false), _signGrade(toCopy._signGrade), _execGrade(toCopy._signGrade)
{
	if (toCopy._signGrade < 1 || toCopy._execGrade< 1)
		throw Form::GradeTooHighException();
	if (toCopy._signGrade > 150 || toCopy._execGrade > 150)
		throw Form::GradeTooLowException();
}

Form	&Form::operator=(const Form &toAssign)
{
	//Useless
	(void) toAssign;
	return (*this);
}

Form::~Form()
{

}


const string	&Form::getName() const
{
	return (this->_name);
}

bool	Form::isSigned() const
{
	return (this->_isSigned);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecGrade() const
{
	return (this->_execGrade);
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > this->getSignGrade())
	{
		throw Form::GradeTooLowException();
	}
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
	o << "Form " << form.getName() << ", can be signed by rank " << form.getSignGrade() << " or more and executed by rank " << form.getExecGrade() << " or more, ";
	if (form.isSigned())
		o << "signed" << endl;
	else
		o << "not signed" << endl;
	return (o);
}


void	Form::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned() || executor.getGrade() > this->getExecGrade())
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	this->doJob();
}
