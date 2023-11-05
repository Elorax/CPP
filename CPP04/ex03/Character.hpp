/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:09:27 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:09:28 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
	Character();
	Character(const std::string &name);
	Character(const Character&);
	Character	&operator=(const Character&);
	~Character();
	std::string const& getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

	protected:
	std::string	_name;
	AMateria	*_matPtrs[4];
};

#endif
