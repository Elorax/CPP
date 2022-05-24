/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:19:11 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/24 02:35:22 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const string &target): Form("Presidential Pardon Form", 25, 5), _target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::doJob() const
{
	cout << this->_target << " has been forgiven by Zaphod Beeblebrox." << endl;
}
