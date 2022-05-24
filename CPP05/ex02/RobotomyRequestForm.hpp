/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:36:21 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 02:32:04 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:
	RobotomyRequestForm(const string &target = "test.txt");
	~RobotomyRequestForm();

	private:
	void	dojob(void) const;
	string	_target;
};

#endif
