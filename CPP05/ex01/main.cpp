/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:41:44 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 23:43:03 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



int main()
{
	Bureaucrat	patron("Bob", 1);
	Bureaucrat	stagiaire("Jack", 150);
	Form	form1("Formulaire de contestation des doigts de l'homme", 1, 1);
	Form	form150("Formulaire d'inscription a Dofus", 150, 150);
	try
	{
		Form	faux_papiers("faurmulere de sessacion d aparteuman", 2, -42);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl; //Exception form: grade too high
	}
	std::cout << form1 << std::endl;
	patron.downgrade();
	patron.signForm(form1);
	std::cout << form1 << std::endl;
	patron.upgrade();
	patron.signForm(form1);
	std::cout << form1 << std::endl;
	std::cout << form150 << std::endl;
	stagiaire.signForm(form150);
	std::cout << form150 << std::endl;
	try
	{
		Form	form50("Laisser passer A38", 50, 50);
		std::cout << form50 << std::endl;
		form50.beSigned(stagiaire);	//remplacer stagiaire par patron pour pas throw d'exception
		std::cout << form50 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;	//exception form : grade too low !
	}
	//Ajouter un ex de throw d'exception pour Form grade too low
}
