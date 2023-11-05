/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:47:28 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 18:34:09 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wrong usage.\n./SIFL <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string str;
//	char	*c_filename = new char[filename.length() + 1];
//	std::strcpy(c_filename, 

	if (!s1[0])
	{
		std::cout << "Error : s1 must not be empty." << std::endl;
		return (1);
	}

	std::ifstream ifs(filename.c_str(), std::ifstream::in);
	if (!ifs.good())
	{
		std::cout << "Error : could not open file " << filename << std::endl;
		return (1);
	}
	std::ofstream ofs ((filename + ".replace").c_str(), std::ofstream::out);
	std::stringstream buffer;
	buffer << ifs.rdbuf();
	str = buffer.str();
	size_t	found(str.find(s1));

	while (found != std::string::npos)
	{
		str.erase(found, s1.size());
		str.insert(found, s2);
		found = str.find(s1, found + s2.size());
	}

	ofs << str;
	ofs.close();
	return (0);
}
