/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 06:18:10 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 06:34:08 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap&);

	void	attack(const string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	string	getName() const;
	int		getHP() const;
	int		getEP() const;
	int		getAD() const;

	protected:

	string	_name;
	int	_hp;
	int	_ep;
	int	_ad;
};

std::ostream	&operator<<(std::ostream &flux, ClapTrap const& clappy);

#endif	
