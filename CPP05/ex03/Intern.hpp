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

class	Intern
{
	public:

	Intern();
	Intern(const Intern&);
	Intern	&operator=(const Intern&);
	~Intern();
	AForm	*makeForm(const std::string &name, const std::string &target) const;

	private:
	std::string _names[3];
	AForm	*_createForm(int idx, const std::string &target) const;
};

#endif
