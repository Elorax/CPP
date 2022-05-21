/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:36:19 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 05:47:21 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point	a(0,0);
	Point	b(4,0);
	Point	c(0,4);
	Point	p1(1,1);
	Point	p2(2,1);
	Point	p3(1,2);
	Point	p4(2,2);
	Point	p5(-4, -2);
	Point	p6(4, 0);
	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;
	std::cout << bsp(a, b, c, p4) << std::endl;
	std::cout << bsp(a, b, c, p5) << std::endl;
	std::cout << bsp(a, b, c, p6) << std::endl;

}
