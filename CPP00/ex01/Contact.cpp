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

Contact::Contact(std::string const &firstName, std::string const &lastName, std::string const &nickname, std::string const &phoneNumber, std::string const &darkestSecret) : _firstName(firstName), _lastName(lastName), _nickname(nickname), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
}
Contact::Contact() : _firstName("empty"), _lastName("empty"), _nickname("empty"), _phoneNumber("empty"), _darkestSecret("empty")
{

}

Contact::~Contact()
{
}

std::string	Contact::getFirstName() const
{
	return (this->_firstName);
}
std::string	Contact::getLastName() const
{
	return (this->_lastName);
}
std::string	Contact::getNickname() const
{
	return (this->_nickname);
}
std::string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}
std::string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
