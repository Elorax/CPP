/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:47:48 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:47:49 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void	Harl::info()
{
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void	Harl::warning()
{
	cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error()
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

typedef	void(Harl::*ptr) ();

void	Harl::complain(string level)
{
	string actions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
//	void (Harl::*ptrs)()[4] = {
	ptr ptrs[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4 ; i++)
	{
		if (actions[i] == level)
			(this->*ptrs[i])();
	}
}
