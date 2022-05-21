/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:42:19 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:42:20 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*Horde;

	Horde = zombieHorde(10, "A ZOOOMMBIIIEEEE");
	if (!Horde)
		return (1);
	for(int i = 0; i < 10; i++)
	{
		std::cout << "Zombie " << i << " : ";
		Horde[i].announce();
	}
	delete [] Horde;
	return(0);
}
