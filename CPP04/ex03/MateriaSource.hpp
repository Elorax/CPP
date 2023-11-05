/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:10:16 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:10:17 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
    public:

    ~MateriaSource();
    MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

    private:
    
    AMateria    *_matPtrs[4];
};

#endif
