/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:41:44 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 02:39:38 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	Bureaucrat	patron("Bob", 1);
	Bureaucrat	stagiaire("Jack", 150);

	Form	*shrub = new ShrubberyCreationForm("GAAARDEN");
	Form	*robot = new RobotomyRequestForm("K.R.O.T.E");
	Form	*sujet = new PresidentialPardonForm("Fchouky");

	try
	{
		patron.executeForm(*shrub);
	}
	catch (const std::exception &e)
	{
		cout << e.what() << endl;
	}

	try
	{
		patron.signForm(*shrub);
	}
	catch(const std::exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		patron.executeForm(*shrub);
	}
	catch(const std::exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		patron.signForm(*robot);
	}
	catch (const std::exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		patron.signForm(*sujet);
	}
	catch (const std::exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		stagiaire.executeForm(*sujet);
	}
	catch (const std::exception &e)
	{
		cout << e.what() << endl;
	}
	stagiaire.signForm(*sujet);

	patron.executeForm(*sujet);
	patron.executeForm(*robot);

	delete shrub;
	delete robot;
	delete sujet;
}
