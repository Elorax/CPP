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

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
	Data	test;
	test.i = 42;
	test.c = '*';
	test.str = "Imma serial KILLER";

	std::cout << "Data address before serialisation : " << &test << std::endl;
	std::cout << test.i << test.c << test.str << std::endl;
	std::cout << "Data address after serialisation : " << Serializer::serialize(&test) << std::endl;
	std::cout << test.i << test.c << test.str << std::endl;
	std::cout << "Data address after deserialisation : " << Serializer::deserialize(Serializer::serialize(&test)) << std::endl;
	std::cout << test.i << test.c << test.str << std::endl;

}

