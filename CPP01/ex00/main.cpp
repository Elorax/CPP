/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:43:02 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:43:03 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*zombieOnHeap = newZombie("Zombard");
	Zombie	zombieOnStack("Zombardeux");

	zombieOnStack.announce();
	zombieOnHeap->announce();
	randomChump("Someone we didn't care about anyway");
	delete zombieOnHeap;
	return(0);
}
