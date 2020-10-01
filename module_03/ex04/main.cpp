/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/01 20:58:25 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#define BOLDIFY(x) "\033[1m" + (std::string)x + "\033[0m"

void	FragScav(void)
{
	std::cout << BOLDIFY("\n\n EX00-02 test start\n\n") << std::endl;
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

void	test03(void)
{
	std::cout << BOLDIFY("\n\n ex03 test start\n\n") << std::endl;
	NinjaTrap Ninja("Ninja");
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
		ClapTrap	Clap("Bonnie");
		Ninja.ninjaShoebox(Clap);
	}
}

void	test04(void)
{
	std::cout << BOLDIFY("\n\n ex04 test start\n\n") << std::endl;

	{
		std::cout << "\033[32m Lifetime test\033[0m\n";
		SuperTrap test("LifetimeTest");
	}
	std::cout << "\033[32m Lifetime test over\033[0m\n" << std::endl;
	SuperTrap Super("Super");
	{
		std::cout << std::endl;
		NinjaTrap	Ninja2("NinjaTrap");
		Super.ninjaShoebox(Ninja2);
	}
	{
		std::cout << std::endl;
		FragTrap	Frag("FragTrap");
		Super.ninjaShoebox(Frag);
	}
	{
		std::cout << std::endl;
		ScavTrap	Scav("ScavTrap");
		Super.ninjaShoebox(Scav);
	}
	{
		std::cout << std::endl;
		ClapTrap	Clap("ClapTrap");
		Super.ninjaShoebox(Clap);
	}
	Super.vaulthunter_dot_exe("psycho");
}

int		main(void)
{
	char c = 0;

	std::cout << BOLDIFY("Enter a number to run ex0(n) 0 >= N <= 4.\n");
	std::cout << BOLDIFY("Enter a different number to run all tests") << std ::endl;
	while (!std::isdigit(c)) 
		c = getchar();
	if (c != '4' && c != '3')
		FragScav();
	if (c == '3' || c > '4')
		test03();
	if (c >= '4')
		test04();
	return (0);
}