/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:46:42 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:46:43 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class	Weapon
{
	public:
	Weapon(std::string type = "NO_NAME");
	const std::string&	getType() const;
	void	setType(std::string type);
	~Weapon();

	private:
	std::string	m_type;
};

#endif
