/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:19:11 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 00:35:53 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const string &target): Form("shrubbery creation form", 145, 137), _target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
void	ShrubberyCreationForm::doJob() const
{
	std::fstream fout;

	fout.open(this->_target + "_shrubbery", std::ios_base::out);
	if (!fout.is_open())
	{
		cout << "failed to open " << this->_target << endl;
	}
	else
	{
		fout << "              v .   ._, |_  .," << endl;
		fout << "           `-._\\/  .  \\ /    |/_" << endl;
		fout << "               \\  _\\, y | \\//" << endl;
		fout << "         _\\_.___\\\\, \\\\/ -.\\||" << endl;
		fout << "           `7-,--.`._||  / / ," << endl;
		fout << "           /'     `-. `./ / |/_.' " << endl;
		fout << "                     |    |// " << endl;
		fout << "                     |_    / " << endl;
		fout << "                     |-   | " << endl;
		fout << "                     |   =| " << endl;
		fout << "                     |    | " << endl;
		fout << "--------------------/ ,  . \\--------._ " << endl;
		fout.close();
	}
}
