/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:59:48 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:59:49 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		cout << "Please execute program with \"DEBUG\", \"INFO\", \"WARNING\", or \"ERROR\" argument." << endl;
		return (1);
	}

	Harl	harl;
	string level = av[1];
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int asked_level(-1);
	for(int i(0);i < 4; i++)
	{
		if (levels[i] == level)
			asked_level = i;
	}
	switch (asked_level)
	{
		case 0:
			cout << "[ " << levels[0] << " ]" << endl;
			harl.complain(levels[0]);
			cout << "[ " << levels[1] << " ]" << endl;
			harl.complain(levels[1]);
			cout << "[ " << levels[2] << " ]" << endl;
			harl.complain(levels[2]);
			cout << "[ " << levels[3] << " ]" << endl;
			harl.complain(levels[3]);
			break;
		case 1:
			cout << "[ " << levels[1] << " ]" << endl;
			harl.complain(levels[1]);
			cout << "[ " << levels[2] << " ]" << endl;
			harl.complain(levels[2]);
			cout << "[ " << levels[3] << " ]" << endl;
			harl.complain(levels[3]);
			break;
		case 2:
			cout << "[ " << levels[2] << " ]" << endl;
			harl.complain(levels[2]);
			cout << "[ " << levels[3] << " ]" << endl;
			harl.complain(levels[3]);
			break;
		case 3:
			cout << "[ " << levels[3] << " ]" << endl;
			harl.complain(levels[3]);
			break;
		default:
			cout << "[ Probably complaining about insgnificant problems ]" << endl;	
	}
	/*
	if (asked_level == -1)
	{
		cout << "[Probably complaining about insgnificant problems ]" << endl;
		return (0);
	}
	for(int i(asked_level);i < 4; i++)
	{
		cout << "[ " << levels[i] << " ]" << endl;
		harl.complain(levels[i]);
	}*/
	return (0);
}
