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

void	PhoneBook::newContact(string const &firstName, string const &lastName, string const &nickname, string const &phoneNumber, string const &darkestSecret)
{
	this->_contact[this->_nbContacts % 8] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	this->_nbContacts++;
	return ;
}

void	PhoneBook::printContacts(void) const
{
	cout << "     Index|   F. Name|   L. Name|  Nickname|" << endl;
	for (int i = 0; i < this->_nbContacts && i < 8; i++)
		PhoneBook::printContact(i);
	return ;
}
string	toShort(const string &s)
{
	string str(s);

	if (str.size() < 10)
		str.insert(0, 10 - str.size(), ' ');
	else if (str.size() > 10)
		str = str.substr(0, 9) + '.';
	return (str);

}
void	PhoneBook::printContact(int i) const
{
	cout << "         " << i << "|";
	cout << toShort(this->_contact[i].getFirstName()) << "|";
	cout << toShort(this->_contact[i].getLastName()) << "|";
	cout << toShort(this->_contact[i].getNickname()) << "|" << endl;
}

void	PhoneBook::printInfo(int nbContact) const
{
	if (nbContact < 0 || nbContact >= this->_nbContacts)
	{
		cout << "Non existing contact. Please refer to PEBKAC manual" << endl;
		return ;
	}
	cout << "First name : " << this->_contact[nbContact].getFirstName() << endl;
	cout << "Last name : " << this->_contact[nbContact].getLastName() << endl;
	cout << "Nickname : " << this->_contact[nbContact].getNickname() << endl;
	cout << "Phone number : " << this->_contact[nbContact].getPhoneNumber() << endl;
	cout << "Darkest secret : " << this->_contact[nbContact].getDarkestSecret() << endl;
}
