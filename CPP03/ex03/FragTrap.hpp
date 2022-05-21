/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:49:18 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 16:49:19 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
	FragTrap(string name = "K.R.O.T.E");
	FragTrap(const FragTrap&);
	~FragTrap();
	void	highFivesGuys();
};

#endif
