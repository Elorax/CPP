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


class	PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	void	newContact(std::string const &firstName, std::string const &lastName, std::string const &nickname, std::string const &phoneNumber, std::string const &darkestSecret);
	void	printContacts(void) const;
	void	printInfo(int nbContact) const;
	int	getNbContacts(void) const;

	private:

	void	printContact(int nbContact) const;
	Contact	_contact[8];
	int	_nbContacts;
};

std::string	toShort(const std::string &s);

#endif
