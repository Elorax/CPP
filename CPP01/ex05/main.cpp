/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:47:59 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:48:01 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	harl;

	harl.complain("DEBUG");
//	harl.complain("NOTHING");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("INFO");

}
