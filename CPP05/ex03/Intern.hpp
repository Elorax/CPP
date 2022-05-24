/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:58:55 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 20:56:13 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Intern
{
	public:

	Intern();
	Intern(const Intern&);
	Intern	&operator=(const Intern&);
	~Intern();
	Form	*makeForm(const string &name, const string &target) const;

	private:
	string _names[3];
	Form	*_createForm(int idx, const string &target) const;
};

#endif
