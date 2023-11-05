/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:43:32 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:44:12 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of std::string : " << &str << std::endl;
	std::cout << "Memory address held by std::stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address held by std::stringREF : " << &stringREF << std::endl;

	std::cout << "Value of std::string : " << str << std::endl;
	std::cout << "Value pointed by std::stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed by std::stringREF : " << stringREF << std::endl;
}
