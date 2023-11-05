/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:19:11 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 02:35:38 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("robotomy request form", 72, 45), _target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
#include <cstdlib>
#include <ctime>

void	RobotomyRequestForm::doJob() const
{
	std::srand(std::time(NULL));
	if (std::rand() % 2)
	{
	std::cout << "*clic* BbrrzzzvvvrVVRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRKKRKRKRRKRKRKRRRKRKRKRRRRRRR" << std::endl;
	std::cout << "*clic*" << std::endl;
	std::cout << this->_target << " robotomized successfully !" << std::endl;
	std::cout << "    __,_," << std::endl;
	std::cout << "   [_|_/ " << std::endl;
	std::cout << "    //" << std::endl;
	std::cout << "  _//    __" << std::endl;
	std::cout << " (_|)   |@@|" << std::endl;
	std::cout << "  \\ \\__ \\--/ __" << std::endl;
	std::cout << "   \\o__|----|  |   __" << std::endl;
	std::cout << "       \\ }{ /\\ )_ / _\\" << std::endl;
	std::cout << "       /\\__/\\ \\__O (__" << std::endl;
	std::cout << "      (--/\\--)    \\__/" << std::endl;
	std::cout << "      _)(  )(_" << std::endl;
	std::cout << "     `---''---`" << std::endl << std::endl << std::endl;
	std::cout << " Bip boup bip boup" << std::endl;
	}
	else
	{
		std::cout << "*clic* BrrzvvrVRRRRZZZBBZZZZVVVRVVRVZZZVRRrrrvrggrarbabllblgbgbl... *clic*" << std::endl;
		std::cout << "Robotomization failed. No bip boup for " << this->_target << std::endl;
	}
}
