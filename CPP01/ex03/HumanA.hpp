/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:46:22 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:46:23 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
	public:
	HumanA(std::string name, Weapon &weapon);
	void	attack();
	~HumanA();

	private:
	std::string m_name;
	Weapon &m_weapon;
};

#endif
