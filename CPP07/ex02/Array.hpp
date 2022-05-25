/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:43:16 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/26 00:44:30 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>


template<typename T>
class	Array
{
	public:

	Array(unsigned int n) : _size(n)
	{
		this->_tab = new T[n]();
	}
	Array() : _size(0)
	{
		this->_tab = new T[0]();
	}
	Array(const Array& toCopy): _size(toCopy._size)
	{
		this->_tab = new T[toCopy._size]();
		for (unsigned int i(0); i < toCopy._size; i++)
			this->_tab[i] = toCopy._tab[i];
	}
	class	InvalidIndexException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Error : Invalid index");
		}
	};
	Array &operator=(const Array& rhs)
	{
		delete[] (this->_tab);
		this->_size = rhs._size;
		this->_tab = new T[rhs._size]();
		for (unsigned int i(0); i < rhs._size; i++)
			this->_tab[i] = rhs._tab[i];
		return (*this);
	}
	T	&operator[](unsigned int idx) const
	{
		if (idx >= this->_size)
			throw InvalidIndexException();
		return (this->_tab[idx]);
	}
	unsigned int getSize() const
	{
		return this->_size;
	}
	~Array()
	{
		delete[] (_tab);
	}

	private:
	T	*_tab;
	unsigned int _size;

};

#endif
