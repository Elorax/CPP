/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:36:21 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 02:31:51 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>
class	ShrubberyCreationForm : public AForm
{
	public:
	ShrubberyCreationForm(const std::string &target = "garden");
	~ShrubberyCreationForm();

	private:
	void	doJob(void) const;
	std::string	_target;
};
#endif
