/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:46:20 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 16:14:28 by abiersoh         ###   ########.fr       */
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
	ClapTrap(string name = "R2D2");
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
