/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/30 20:25:27 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int		main(void)
{
	NinjaTrap	Ninja("Ninja");
	{
		std::cout << std::endl;
		NinjaTrap	Ninja2("Ninja2");
		Ninja.ninjaShoebox(Ninja2);
	}
	{
		std::cout << std::endl;
		FragTrap	Frag("Bob");
		Ninja.ninjaShoebox(Frag);
	}
	{
		std::cout << std::endl;
		ScavTrap	Scav("Bill");
		Ninja.ninjaShoebox(Scav);
	}
	std::cout << std::endl;
	Ninja.ninjaShoebox(Ninja);
	std::cout << std::endl;
	return (0);
}
