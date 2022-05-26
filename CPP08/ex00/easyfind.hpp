/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:14:41 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/26 02:31:28 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>


class	intNotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Exception : int not found");
		}
};

template<typename T>
int	easyfind(T &a, int n)
{
	typename T::iterator	it = std::find(a.begin(), a.end(), n);
	if (it == a.end())
		throw intNotFoundException();
	return *it; 
}

#endif
