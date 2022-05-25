/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:40:07 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/25 22:09:22 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <limits>
# include <exception>

template<typename T>
void	swap(T &a, T &b)
{
	T tmp(a);
	a = b;
	b = tmp;
}

class ConstSwapException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Can't swap const values");
		}
};

template<typename T>
void swap(const T &a, const T &b)
{
	static_cast<void>(a);
	static_cast<void>(b);
	throw ConstSwapException();
}

template<typename T>
T const &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template<typename T>
T const &max(const T &a, const T &b)
{
	return (a > b ? a : b);
}
#endif
