/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 05:33:45 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/26 05:49:20 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>

template<class T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack() : std::stack<T>() {};
		MutantStack<T>(MutantStack const & toCopy): std::stack<T>(toCopy){};
		virtual ~MutantStack(){};
		MutantStack<T>	&operator=(MutantStack const &rhs)
		{
			*this = new std::stack<T>(rhs); //?
			return (*this);
		};

		typename std::stack<T>::container_type::iterator begin()
		{
			return (std::stack<T>::c.begin());
		}
		typename std::stack<T>::container_type::iterator end()
		{
			return (std::stack<T>::c.end());
		}
		typename std::stack<T>::container_type::const_iterator cbegin() const
		{
			return (std::stack<T>::c.cbegin());
		}
		typename std::stack<T>::container_type::const_iterator cend() const
		{
			return (std::stack<T>::c.cend());
		}
		typename std::stack<T>::container_type::reverse_iterator rbegin()
		{
			return (std::stack<T>::c.rbegin());
		}
		typename std::stack<T>::container_type::reverse_iterator rend()
		{
			return (std::stack<T>::c.rend());
		}
		typename std::stack<T>::container_type::const_reverse_iterator crbegin() const
		{
			return (std::stack<T>::c.crbegin());
		}
		typename std::stack<T>::container_type::const_reverse_iterator crend() const
		{
			return (std::stack<T>::c.crend());
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		


};
#endif
