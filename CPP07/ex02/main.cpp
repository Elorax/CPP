/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:39:24 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/26 00:51:51 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
	Array<int> tab1(10);
	tab1[5] = 12;

	try
	{
	for (unsigned int i(0); i < tab1.getSize() + 1; i++)
		std::cout << tab1[i] << ", ";
	}

	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Array<std::string> tab2(5);
		tab2[0] = "J'ai ";
		tab2[1] = "tout ";
		tab2[2] = "mange ";
		tab2[3] = "le ";
		tab2[4] = "chocolat !";
		for (unsigned int i(0); i < tab2.getSize(); i++)
			std::cout << tab2[i];
		std::cout << std::endl;
		Array<std::string> tab3(tab2);

		tab3[4] = "gloubiboulga";
		tab3[0] = "T'as ";
		for (unsigned int i(0); i < tab3.getSize(); i++)
			std::cout << tab3[i];
		std::cout << std::endl;
		tab3 = tab2;
		for (unsigned int i(0); i < tab3.getSize(); i++)
			std::cout << tab3[i];


	}

	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
