/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:42:30 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:42:32 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP
# include <iostream>
# include <string>

class	Zombie
{
	public:
	Zombie(std::string name = "NO_NAME");
	void	announce(void);
	void	set_name(std::string name);
	~Zombie();

	private:
	std::string	m_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
