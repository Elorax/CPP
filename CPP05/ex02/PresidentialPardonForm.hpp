/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:36:21 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 02:33:11 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
	PresidentialPardonForm(const string &target = "a random");
	~PresidentialPardonForm();

	private:
	void	doJob(void) const;
	string	_target;
};

#endif
