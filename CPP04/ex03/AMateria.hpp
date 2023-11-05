/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:09:18 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:09:20 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	ICharacter;
class	AMateria
{
	protected:
	std::string	_type;



	public:
	AMateria(std::string const &type);
	AMateria();
	virtual ~AMateria();

	std::string const &getType() const;	//returns materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter const &target);

};

#endif
