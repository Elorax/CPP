/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:48:54 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/25 16:54:36 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
using	std::string;
using	std::cout;
using	std::endl;

Base	*generate(void)
{
	srand(time(NULL));
	int a(rand() % 3);
	switch (a)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			break;
	}
	return (new A());
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		cout << "Classe : A" << endl;
	if (dynamic_cast<B *>(p))
		cout << "Classe : B" << endl;
	if (dynamic_cast<C *>(p))
		cout << "Classe : C" << endl;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void) a;
		cout << "Classe : A" << endl;
	}
	catch (std::bad_cast &bc)
	{
		;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void) b;
		cout << "Classe : B" << endl;
	}
	catch (std::bad_cast &bc)
	{
		;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void) c;
		cout << "Classe : C" << endl;
	}
	catch (std::bad_cast &bc)
	{
		;
	}
}


