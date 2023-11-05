/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:06:43 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 03:06:45 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nbContacts(0)
{
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::newContact(std::string const &firstName, std::string const &lastName, std::string const &nickname, std::string const &phoneNumber, std::string const &darkestSecret)
{
	this->_contact[this->_nbContacts % 8] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	this->_nbContacts++;
	return ;
}

int	PhoneBook::getNbContacts(void) const
{
	if (this->_nbContacts < 8)
		return (this->_nbContacts);
	else
		return (8);
}

void	PhoneBook::printContacts(void) const
{
	std::cout << "     Index|   F. Name|   L. Name|  Nickname|" << std::endl;
	for (int i = 0; i < this->_nbContacts && i < 8; i++)
		PhoneBook::printContact(i);
	return ;
}
std::string	toShort(const std::string &s)
{
	std::string str(s);

	if (str.size() < 10)
		str.insert(0, 10 - str.size(), ' ');
	else if (str.size() > 10)
		str = str.substr(0, 9) + '.';
	return (str);

}
void	PhoneBook::printContact(int i) const
{
	std::cout << "         " << i << "|";
	std::cout << toShort(this->_contact[i].getFirstName()) << "|";
	std::cout << toShort(this->_contact[i].getLastName()) << "|";
	std::cout << toShort(this->_contact[i].getNickname()) << "|" << std::endl;
}

void	PhoneBook::printInfo(int nbContact) const
{
	if (nbContact < 0 || nbContact >= this->_nbContacts)
	{
		std::cout << "Non existing contact. Please refer to PEBKAC manual" << std::endl;
		return ;
	}
	std::cout << "\x1b[2J\x1b[H";
	std::cout << "First name     : " << this->_contact[nbContact].getFirstName() << std::endl;
	std::cout << "Last name      : " << this->_contact[nbContact].getLastName() << std::endl;
	std::cout << "Nickname       : " << this->_contact[nbContact].getNickname() << std::endl;
	std::cout << "Phone number   : " << this->_contact[nbContact].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << this->_contact[nbContact].getDarkestSecret() << std::endl;
}
