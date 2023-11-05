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

	std::cout << patron << std::endl << stagiaire << std::endl;

	try
	{
		patron.downgrade();
		std::cout << patron << std::endl;
		patron.upgrade();
		patron.upgrade();
		std::cout << patron << std::endl;
		std::cout << "We never reach this part since last upgrade threw an exception" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;	//printing thrown exception
	}
	try
	{
		stagiaire.upgrade();
		std::cout << stagiaire << std::endl;
		stagiaire.downgrade();
		stagiaire.downgrade();
		std::cout << stagiaire << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	sdf("Jean-rene", 200);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	god("Dieu", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << patron << std::endl;
	stagiaire = patron;
	std::cout << stagiaire << std::endl;	//Copie du grade, mais le stagiaire garde le meme nom !
}
