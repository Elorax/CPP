/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:09:23 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:09:24 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const string &name): _name(name)
{
	this->_matPtrs[0] = NULL;
	this->_matPtrs[1] = NULL;
	this->_matPtrs[2] = NULL;
	this->_matPtrs[3] = NULL;
}
Character::Character(const Character& toCopy): _name(toCopy._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (toCopy._matPtrs[i])
			this->_matPtrs[i] = toCopy._matPtrs[i]->clone();
		else
			this->_matPtrs[i] = NULL;
	}
}

Character	&Character::operator=(const Character &toAssign)
{
	this->_name = toAssign._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_matPtrs[i])
		{
			delete this->_matPtrs[i];
			this->_matPtrs[i] = NULL;
		}
		if (toAssign._matPtrs[i])
			this->_matPtrs[i] = toAssign._matPtrs[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (int i(0); i < 4; i++)
		delete	this->_matPtrs[i];
}


string const& Character::getName() const
{
	return (this->_name);
}





void Character::equip(AMateria *m)
{
	int i(0);
	for (; this->_matPtrs[i] != NULL; i++);
	if (i < 4)
	this->_matPtrs[i] = m;
}
void Character::unequip(int idx)
{
	this->_matPtrs[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (!this->_matPtrs[idx])
		{
			cout << this->_name << " can't use the materia because slot " << idx << " is empty !" << endl;
			return ;
		}
	this->_matPtrs[idx]->use(target);
}
