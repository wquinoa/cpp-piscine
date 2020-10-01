/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/01 20:56:56 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void	FragScav(void)
{
	std::string	target = REDIFY(std::string("psycho"));
	{
		ScavTrap	Scav(GREENIFY(std::string("SC4V-TP")));
		std::cout << std::endl;
		Scav.meleeAttack(target);
		Scav.rangedAttack(target);

		std::cout << std::endl;
		for (int i = 0; i < 7; i++)
			Scav.takeDamage(25 - (i == 3));

		std::cout << std::endl;
		Scav.beRepaired(80);
		Scav.beRepaired(80);

		std::cout << std::endl;
		for (int i = 0; i < 5; i++)
			Scav.challengeNewcomer(target);
		std::cout << std::endl;
	}
	{
		FragTrap	Frag(GREENIFY(std::string("FR4G-TP")));

		Frag.meleeAttack(target);
		Frag.rangedAttack(target);

		std::cout << std::endl;
		for (int i = 0; i < 7; i++)
			Frag.takeDamage(25 - (i == 3));

		std::cout << std::endl;
		Frag.beRepaired(80);
		Frag.beRepaired(80);

		std::cout << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 5; i++)
			Frag.vaulthunter_dot_exe(target);
		std::cout << std::endl;
	}
}

int		main(void)
{
	NinjaTrap	Ninja("Ninja");

	FragScav();
	{
		std::cout << std::endl;
		NinjaTrap	Ninja2("Ninja2");
		Ninja.ninjaShoebox(Ninja2);
	}
	{
		std::cout << std::endl;
		FragTrap	Frag("Frag");
		Ninja.ninjaShoebox(Frag);
	}
	{
		std::cout << std::endl;
		ScavTrap	Scav("Scav");
		Ninja.ninjaShoebox(Scav);
	}
	{
		std::cout << std::endl;
		ClapTrap	Clap("Clap");
		Ninja.ninjaShoebox(Clap);
	}
	std::cout << std::endl;
	Ninja.ninjaShoebox(Ninja);
	std::cout << std::endl;
	return (0);
}
