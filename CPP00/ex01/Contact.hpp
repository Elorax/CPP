/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:06:56 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 03:06:57 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	Contact
{
	public:
	Contact(string const &firstName, string const &lastName, string const &nickname, string const &phoneNumber, string const &darkestSecret);
	Contact();
	~Contact();
	string	getFirstName() const;
	string	getLastName() const;
	string	getNickname() const;
	string	getPhoneNumber() const;
	string	getDarkestSecret() const;

	private:
	string	_firstName;
	string	_lastName;
	string	_nickname;
	string	_phoneNumber;
	string	_darkestSecret;
};

#endif
