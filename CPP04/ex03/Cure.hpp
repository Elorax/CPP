/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:09:31 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:09:31 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"


class	Cure: public AMateria
{
	public:
	Cure();
	Cure(std::string const &type);
	Cure(const Cure&);
	Cure	&operator=(const Cure& toAssign);
	~Cure();

	AMateria* clone() const;
//	void use(ICharacter &target);
};

#endif
