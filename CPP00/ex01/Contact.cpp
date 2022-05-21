/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 00:59:50 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 02:29:49 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(string const &firstName, string const &lastName, string const &nickname, string const &phoneNumber, string const &darkestSecret) : _firstName(firstName), _lastName(lastName), _nickname(nickname), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
}
Contact::Contact() : _firstName("empty"), _lastName("empty"), _nickname("empty"), _phoneNumber("empty"), _darkestSecret("empty")
{

}

Contact::~Contact()
{
}

string	Contact::getFirstName() const
{
	return (this->_firstName);
}
string	Contact::getLastName() const
{
	return (this->_lastName);
}
string	Contact::getNickname() const
{
	return (this->_nickname);
}
string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}
string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
