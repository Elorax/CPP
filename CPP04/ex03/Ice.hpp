/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:09:43 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:09:44 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Ice: public AMateria
{
	public:
	
	Ice();
	Ice(const Ice&);
	Ice	&operator=(const Ice&);
	~Ice();
	AMateria	*clone() const;
};

#endif
