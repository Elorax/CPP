/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:17:57 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 00:41:46 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const string &name, int sign, int exec): _name(name), _isSigned(false), _signGrade(sign), _execGrade(exec)
{
	if (sign < 1 || exec < 1)
		throw AForm::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();
}
AForm::AForm(const AForm& toCopy): _name(toCopy._name), _isSigned(false), _signGrade(toCopy._signGrade), _execGrade(toCopy._signGrade)
{
	if (toCopy._signGrade < 1 || toCopy._execGrade< 1)
		throw AForm::GradeTooHighException();
	if (toCopy._signGrade > 150 || toCopy._execGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm	&AForm::operator=(const AForm &toAssign)
{
	//Useless
	(void) toAssign;
	return (*this);
}

AForm::~AForm()
{

}


const string	&AForm::getName() const
{
	return (this->_name);
}

bool	AForm::isSigned() const
{
	return (this->_isSigned);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade() const
{
	return (this->_execGrade);
}

void	AForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > this->getSignGrade())
	{
		throw AForm::GradeTooLowException();
	}
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, const AForm &form)
{
	o << "Form " << form.getName() << ", can be signed by rank " << form.getSignGrade() << " or more and executed by rank " << form.getExecGrade() << " or more, ";
	if (form.isSigned())
		o << "signed" << endl;
	else
		o << "not signed" << endl;
	return (o);
}


void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
	{
		throw AForm::NotSignedException();
	}
	if (executor.getGrade() > this->getExecGrade())
	{
		throw AForm::GradeTooLowException();
	}
	this->doJob();
}
