/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:47:52 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:47:52 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	Harl
{
	public:
	Harl();
	~Harl();
	void	complain(string level);

	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif
