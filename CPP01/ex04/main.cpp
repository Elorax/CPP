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

using std::string;
using std::cout;
using std::endl;

int main(int ac, char **av)
{
	if (ac != 4)
	{
		cout << "wrong usage.\n./SIFL <filename> <s1> <s2>" << endl;
		return (1);
	}

	string filename = av[1];
	string s1 = av[2];
	string s2 = av[3];
	string str;

	if (!s1[0])
	{
		cout << "Error : s1 must not be empty." << endl;
		return (1);
	}

	std::ifstream ifs(filename, std::ifstream::in);
	if (!ifs.good())
	{
		cout << "Error : could not open file " << filename << endl;
		return (1);
	}
	std::ofstream ofs (filename + ".replace", std::ofstream::out);
	std::stringstream buffer;
	buffer << ifs.rdbuf();
	str = buffer.str();
	size_t	found(str.find(s1));

	while (found != string::npos)
	{
		str.erase(found, s1.size());
		str.insert(found, s2);
		found = str.find(s1, found + s2.size());
	}

	ofs << str;
	ofs.close();
	return (0);
}
