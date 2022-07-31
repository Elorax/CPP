/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:10:10 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:10:12 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->_matPtrs[i] = NULL;
}

void	MateriaSource::learnMateria(AMateria *src)
{
	int i(0);
	for (; this->_matPtrs[i]; i++);
	if (i < 4)
	this->_matPtrs[i] = src;	
}

AMateria	*MateriaSource::createMateria(string const &type)
{
	for (int i(0);this->_matPtrs[i] != NULL;i++)
	{
		if (this->_matPtrs[i]->getType() == type)
			return (this->_matPtrs[i]->clone());
	}
	cout << "Couldn't create materia, soz" << endl;
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	for (int i(0); i < 4; i++)
		delete	this->_matPtrs[i];
}
