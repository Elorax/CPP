/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:16:13 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/25 22:25:47 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *tab, size_t size, void (*f)(T))
{
	for(size_t i(0); i < size; i++)
		f(i[tab]);
}

template<typename T>
void	randomFonction(T elem)
{
	std::cout << elem << std::endl;
}
