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

bool	is_valid_command(std::string const &cmd)
{
	if (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT")
	{
		return (1);
	}
	if (cmd != "\10")
		std::cout << "\x1b[2J\x1b[H";
	return (0);
}

bool	input_search(std::string const &str, PhoneBook const &rep)
{
	if (str.size() != 1)
		return (0);
	if (str[0] < '0' || str[0] >= '0' + rep.getNbContacts())	
		return (0);
	return (1);
}

void	searchContact(PhoneBook &rep)
{
	std::string	str("");
	while (!input_search(str, rep))
	{
		std::cout << "\x1b[2J\x1b[H";
		rep.printContacts();
		std::cout << "Enter index of desired contact." << std::endl;
		std::getline(std::cin, str);
	}
	rep.printInfo(str[0] - '0');
}

bool	containsPrintable(std::string s)
{
	for(std::string::iterator it=s.begin(); it!=s.end(); it++)
		if (!std::isprint(*it))
			return (1);
	return (0);
}

bool	isANumber(std::string s)
{
	for(std::string::iterator it=s.begin(); it!=s.end(); it++)
		if (!std::isdigit(*it) && *it != '+' && *it != ' ')
			return (0);
	return (1);

}

void	addContact(PhoneBook &rep)
{
	std::string param[5];
	while (param[0] == "" || containsPrintable(param[0]))
	{
		std::cout << "\x1b[2J\x1b[H";
		std::cout << "Enter contact's first name." << std::endl;
		std::getline(std::cin, param[0]);
	}
	while (param[1] == "" || containsPrintable(param[1]))
	{
		std::cout << "\x1b[2J\x1b[H";
		std::cout << "Enter contact's last name." << std::endl;
		std::getline(std::cin, param[1]);
	}
	while (param[2] == "" || containsPrintable(param[2]))
	{
		std::cout << "\x1b[2J\x1b[H";
		std::cout << "Enter contact's nickname." << std::endl;
		std::getline(std::cin, param[2]);
	}
	while (param[3] == "" || containsPrintable(param[3]) || !isANumber(param[3]))
	{
		std::cout << "\x1b[2J\x1b[H";
		std::cout << "Enter contact's phone number." << std::endl;
		std::getline(std::cin, param[3]);
	}
	while (param[4] == "" || containsPrintable(param[4]))
	{
		std::cout << "\x1b[2J\x1b[H";
		std::cout << "Enter contact's darkest secret." << std::endl;
		std::getline(std::cin, param[4]);
		std::cout << "\x1b[2J\x1b[H";
	}
	rep.newContact(param[0], param[1], param[2], param[3], param[4]);
}

int	handle_cmd(std::string const &cmd, PhoneBook &rep)
{
	if (cmd == "ADD")
		addContact(rep);
	else if(cmd == "SEARCH")
		searchContact(rep);
	else if (cmd == "EXIT")
		return (1);
	return (0);
}

void	display_choices(std::string &cmd)
{
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Please enter one of the following commands" << std::endl;
	std::cout << "\"ADD\" for registera new contact" << std::endl;
	std::cout << "\"SEARCH\" for searching a contact" << std::endl;
	std::cout <<"\"EXIT\" for exiting the program." << std::endl;
	std::getline(std::cin, cmd);
}

int main()
{
	PhoneBook	rep;

	std::string params[5];
	std::string cmd("");
	while (42)
	{
		while (!is_valid_command(cmd))
			display_choices(cmd);
		if (handle_cmd(cmd, rep) == 1)
			return (0);
		cmd = "\10";
	}
}
