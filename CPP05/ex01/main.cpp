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
		cout << e.what() << endl;
	}
	patron.downgrade();
	patron.signForm(form1);
	patron.upgrade();
	cout << form1 << endl;
	patron.signForm(form1);
	cout << form1 << endl;
	cout << form150 << endl;
	stagiaire.signForm(form150);
	cout << form150 << endl;
}
