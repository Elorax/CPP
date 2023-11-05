/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 06:09:44 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 06:14:25 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>


class	ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap&);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName() const;
	int		getHP() const;
	int		getEP() const;
	int		getAD() const;

	private:

	std::string	_name;
	int	_hp;
	int	_ep;
	int	_ad;
};

std::ostream	&operator<<(std::ostream &flux, ClapTrap const& clappy);

#endif	
