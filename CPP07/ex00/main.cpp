/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:40:07 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/25 22:08:49 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <limits>

int main()
{
	std::cout << "42 : " << max<int>(42, 12) << std::endl;
	std::cout << "42 : " << max<float>(42.0f, 12.0f) << std::endl;
//	std::cout << "42 : " << max(42.12, 12.47f) << std::endl;
	std::cout << "trou : " << max<bool>(true, false) << std::endl;
	std::cout << "12 : " << min<int>(42, 12) << std::endl;
	std::cout << "12 : " << min<float>(42.0f, 12.0f) << std::endl;
//	std::cout << "12 : " << min(42.12, 12.47f) << std::endl;
	std::cout << "false : " << min<bool>(true, false) << std::endl;
	int a(42);
	int	b(2);
	float c(3.13f);
	float d(4.0f);
	const int e(42);
	const int f(2);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "Swapping..." << std::endl;
	swap(a, b);
	swap(c, d);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	try
	{
	swap(e,f);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
