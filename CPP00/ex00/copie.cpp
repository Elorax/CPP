/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 23:52:04 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 00:21:44 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int	i(1);

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	while (i < argc)
	{
		std::string str(argv[i]);
		for (std::string::iterator it=str.begin(); it!=str.end(); it++)
			if (*it <= 'z' && *it >= 'a')
				*it -= 32;
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
}
