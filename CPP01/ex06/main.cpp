/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:59:48 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 15:04:13 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please execute program with \"DEBUG\", \"INFO\", \"WARNING\", or \"ERROR\" argument." << std::endl;
		return (1);
	}

	Harl	harl;
	std::string level = av[1];
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int asked_level(-1);
	for(int i(0);i < 4; i++)
	{
		if (levels[i] == level)
			asked_level = i;
	}
	switch (asked_level)
	{
		case 0:
			std::cout << "[ " << levels[0] << " ]" << std::endl;
			harl.complain(levels[0]);
		case 1:
			std::cout << "[ " << levels[1] << " ]" << std::endl;
			harl.complain(levels[1]);
		case 2:
			std::cout << "[ " << levels[2] << " ]" << std::endl;
			harl.complain(levels[2]);
		case 3:
			std::cout << "[ " << levels[3] << " ]" << std::endl;
			harl.complain(levels[3]);
			break;
		default:
			std::cout << "[ Probably complaining about insgnificant problems ]" << std::endl;	
			break;
	}
	return (0);
}
