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

bool	input_search(string const &str, PhoneBook const &rep)
{
	if (str.size() != 1)
		return (0)
	if (str[0] < '0' || str[0] >= '0' + rep.getNb²Contacts() % 8)	
		return (0);
}

void	searchContact(PhoneBook &rep)
{
	int	nb(-1);
	string	str("");
	while (!input_search(str, rep))
	{
		cout << "\x1b[2J\x1b[H";
		rep.printContacts();
		cout << "Enter index of desired contact." << endl;
		std::getline(std::cin, str);
	}
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

int	handle_cmd(string const &cmd, PhoneBook &rep)
{
	if (cmd == "ADD")
		addContact(rep);
	else if(cmd == "SEARCH")
		searchContact(rep);
	else if (cmd == "EXIT")
		return (1);
	return (0);
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
		if (handle_cmd(cmd, rep) == 1)
			return (0);
		cmd = "";
	}
}
