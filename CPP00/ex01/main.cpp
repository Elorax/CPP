/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:06:59 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 03:07:02 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	is_valid_command(string const &cmd)
{
	return (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT");
}

void	searchContact(PhoneBook &rep)
{
	int	nb(-1);
	rep.printContacts();
	cout << "Enter index of desired contact." << endl;
	std::cin >> nb;
	std::cin.ignore();
	rep.printInfo(nb);
}

void	addContact(PhoneBook &rep)
{
	string param[5];
	while (param[0] == "")
	{
		cout << "Enter contact's first name." << endl;
		std::getline(std::cin, param[0]);
	}
	while (param[1] == "")
	{
		cout << "Enter contact's last name." << endl;
		std::getline(std::cin, param[1]);
	}
	while (param[2] == "")
	{
		cout << "Enter contact's nickname." << endl;
		std::getline(std::cin, param[2]);
	}
	while (param[3] == "")
	{
		cout << "Enter contact's phone number." << endl;
		std::getline(std::cin, param[3]);
	}
	while (param[4] == "")
	{
		cout << "Enter contact's darkest secret." << endl;
		std::getline(std::cin, param[4]);
	}
	rep.newContact(param[0], param[1], param[2], param[3], param[4]);
}

void	handle_cmd(string const &cmd, PhoneBook &rep)
{
	if (cmd == "ADD")
		addContact(rep);
	else if(cmd == "SEARCH")
		searchContact(rep);
	else if (cmd == "EXIT")
		exit(EXIT_SUCCESS);
}

void	display_choices(string &cmd)
{
	cout << "Please enter one of the following commands" << endl;
	cout << "\"ADD\" for registera new contact" << endl;
	cout << "\"SEARCH\" for searching a contact" << endl;
	cout <<"\"EXIT\" for exiting the program." << endl;
	std::getline(std::cin, cmd);
}

int main()
{
	PhoneBook	rep;

	string params[5];
	string cmd("");
	while (42)
	{
		while (!is_valid_command(cmd))
			display_choices(cmd);
		handle_cmd(cmd, rep);
		cmd = "";
	}

}