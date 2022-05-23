/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:41:44 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:56:08 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



int main()
{
	Bureaucrat	patron("Bob", 1);
	Bureaucrat	stagiaire("Jack", 150);

	cout << patron << endl << stagiaire << endl;

	try
	{
		patron.downgrade();
		cout << patron << endl;
		patron.upgrade();
		patron.upgrade();
		cout << patron << endl;
	}
	catch(std::exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
	stagiaire.upgrade();
	cout << stagiaire << endl;
	stagiaire.downgrade();
	stagiaire.downgrade();
	cout << stagiaire << endl;
	}
	catch(std::exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		Bureaucrat	sdf("Jean-rene", 200);
	}
	catch(std::exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		Bureaucrat	god("Dieu", 0);
	}
	catch(std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << patron << endl;
	cout << stagiaire << endl;
}
