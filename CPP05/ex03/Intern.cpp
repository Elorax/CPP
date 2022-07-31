/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:57:46 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 20:56:01 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->_names[0] = "shrubbery creation";
	this->_names[1] = "robotomy request";
	this->_names[2] = "presidential pardon";
}

Intern::Intern(const Intern &toCopy)
{
	this->_names[0] = "shrubbery creation";
	this->_names[1] = "robotomy request";
	this->_names[2] = "presidential pardon";
	(void) toCopy;
}

Intern	&Intern::operator=(const Intern &toAssign)
{
	(void) toAssign;
	return (*this);
}

Intern::~Intern()
{

}

Form	*Intern::_createForm(int idx, const string &target) const
{
	Form *form(NULL);
	switch (idx)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			cout << "This form doesn't exist, soz" << endl;
	}
	return form;
}

Form	*Intern::makeForm(const string &name, const string &target) const
{
	int i(0);
	for (; i < 3; i++)
		if (this->_names[i] == name)
			break;
	return (this->_createForm(i, target));
}
