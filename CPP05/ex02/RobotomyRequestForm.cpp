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

#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(const string &target): Form("robotomy request form", 72, 45), _target(target)
{

}

#include <cstdlib>
#include <ctime>

void	RobotomyRequestForm::dojob() const
{
	std::srand(std::time(nullptr));
	if (std::rand() % 2)
	{
	cout << "*clic* BbrrzzzvvvrVVRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRKKRKRKRRKRKRKRRRKRKRKRRRRRRR" << endl;
	cout << "*clic*" << endl;
	cout << this->_target << " robotomized successfully !" << endl;
	cout << "    __,_," << endl;
	cout << "   [_|_/ " << endl;
	cout << "    //" << endl;
	cout << "  _//    __" << endl;
	cout << " (_|)   |@@|" << endl;
	cout << "  \\ \\__ \\--/ __" << endl;
	cout << "   \\o__|----|  |   __" << endl;
	cout << "       \\ }{ /\\ )_ / _\\" << endl;
	cout << "       /\\__/\\ \\__O (__" << endl;
	cout << "      (--/\\--)    \\__/" << endl;
	cout << "      _)(  )(_" << endl;
	cout << "     `---''---`" << endl << endl << endl;
	cout << " Bip boup bip boup" << endl;
	}
	else
	{
		cout << "*clic* BrrzvvrVRRRRZZZBBZZZZVVVRVVRVZZZVRRrrrvrggrarbabllblgbgbl... *clic*" << endl;
		cout << "Robotomization failed. No bip boup for " << this->_target << endl;
	}
}
