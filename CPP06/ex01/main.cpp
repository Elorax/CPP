/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:20:35 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/25 16:29:57 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>
#include "Data.hpp"


uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data	test;
	test.i = 42;
	test.c = '*';
	test.str = "Imma serial KILLER";

	std::cout << "Data address before serialisation : " << &test << std::endl;
	std::cout << "Data address after serialisatoin : " << deserialize(serialize(&test)) << std::endl;
}

