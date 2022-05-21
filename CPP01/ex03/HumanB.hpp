/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:46:26 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:46:27 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	public:
	HumanB(std::string name = "NO_NAME");
	void	attack();
	void	setWeapon(Weapon &weapon);
	~HumanB();

	private:
	Weapon *m_weapon;
	std::string m_name;
};

#endif
