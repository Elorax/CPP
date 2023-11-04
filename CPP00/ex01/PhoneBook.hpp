/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:07:08 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 03:07:09 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	void	newContact(string const &firstName, string const &lastName, string const &nickname, string const &phoneNumber, string const &darkestSecret);
	void	printContacts(void) const;
	void	printInfo(int nbContact) const;
	int	getNbContacts(void) const;

	private:

	void	printContact(int nbContact) const;
	Contact	_contact[8];
	int	_nbContacts;
};

string	toShort(const string &s);

#endif
