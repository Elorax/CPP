/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 03:49:45 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/26 04:39:00 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::list<int> lst;

	for(int i(0); i < 50; i++)
	{
		lst.push_back(i);
	}

	Span sp1(60);
	sp1.addNumber(42);
	sp1.addRange(lst.begin(), lst.end());
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	std::vector<int> vec;
	for(int i(0); i < 50; i++)
	{
		vec.push_back(i);
	}
	Span sp2(60);
	sp2.addNumber(42);
	sp2.addRange(vec.begin(), vec.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
