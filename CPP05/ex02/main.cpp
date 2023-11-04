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

	AForm	*shrub = new ShrubberyCreationForm("GAAARDEN");
	AForm	*robot = new RobotomyRequestForm("K.R.O.T.E");
	AForm	*sujet = new PresidentialPardonForm("Fchouky");

	try
	{
		patron.executeForm(*shrub);
	}
	catch (const std::exception &e)
	{
		cout << e.what() << endl;
	}

	cout << endl << endl;
	try
	{
		patron.signForm(*shrub);
	}
	catch(const std::exception& e)
	{
		cout << e.what() << endl;
	}
	cout << endl << endl;
	try
	{
		patron.executeForm(*shrub);
	}
	catch(const std::exception& e)
	{
		cout << e.what() << endl;
	}
	cout << endl << endl;
	try
	{
		patron.signForm(*robot);
	}
	catch (const std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << endl << endl;
	try
	{
		patron.signForm(*sujet);
	}
	catch (const std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << endl << endl;
	try
	{
		stagiaire.executeForm(*sujet);
	}
	catch (const std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << endl << endl;
	stagiaire.signForm(*sujet);
	cout << endl << endl;

	patron.executeForm(*sujet);
	cout << endl << endl;
	patron.executeForm(*robot);
	cout << endl << endl;

	delete shrub;
	delete robot;
	delete sujet;
}
