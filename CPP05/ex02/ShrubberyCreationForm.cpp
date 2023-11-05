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

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("shrubbery creation form", 145, 137), _target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
void	ShrubberyCreationForm::doJob() const
{
	std::fstream fout;

	fout.open((this->_target + "_shrubbery").c_str(), std::ios_base::out);
	if (!fout.is_open())
	{
		std::cout << "failed to open " << this->_target << std::endl;
	}
	else
	{
		fout << "              v .   ._, |_  .," << std::endl;
		fout << "           `-._\\/  .  \\ /    |/_" << std::endl;
		fout << "               \\  _\\, y | \\//" << std::endl;
		fout << "         _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
		fout << "           `7-,--.`._||  / / ," << std::endl;
		fout << "           /'     `-. `./ / |/_.' " << std::endl;
		fout << "                     |    |// " << std::endl;
		fout << "                     |_    / " << std::endl;
		fout << "                     |-   | " << std::endl;
		fout << "                     |   =| " << std::endl;
		fout << "                     |    | " << std::endl;
		fout << "--------------------/ ,  . \\--------._ " << std::endl;
		fout.close();
	}
}
