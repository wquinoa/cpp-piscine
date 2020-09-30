/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/30 18:17:55 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	ClapTrap::Name = name;
	ClapTrap::Hp = 100;
	ClapTrap::level = 1;
	ClapTrap::Ep = 100;
	ClapTrap::maxHp = 100;
	ClapTrap::maxEp = 100;
	ClapTrap::melee = 30;
	ClapTrap::ranged = 20;
	ClapTrap::dmgReduction = 5;
	printer("PREPARE TO DIE!");
}

FragTrap::~FragTrap()
{
	printer("SELF DESTRUCT IN ");
	for (int i = 5; i > 0; i--)
	{
		std::cout << "\r"  << i << "... " << std::flush;
		sleep(1);
	}
	std::cout << std::endl;
	printer("1....");
	sleep(1);
	printer("1.....");
	sleep(1);
	printer("Haha, gotcha");
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	return ((FragTrap &)ClapTrap::operator=(copy));
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::string message = "FR4G-TP " + Name;

	Ep -= 30;
	Ep = Ep < 0 ? 0 : Ep;
	if (Ep > 0)
	{
		message += " attacks " + target + ", causing " + \
		std::to_string(melee) + " damage!";
	}
	else
		message += "'s battery is depleted!";
	printer(message);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::string message = "FR4G-TP " + Name + " shoots " + target + \
		", causing " + std::to_string(ranged) + " damamge!";
	printer(message);
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string message = "";
	std::string	options[5] = {
		"One Shot Wonder",
		"Pirate Ship Mode",
		"Clap-In-The-Box",
		"Gun Wizard",
		"Funzerker"
	};

	message += "FR4G-TP " + Name + " uses " + options[rand() % 5] + "!";
	message += " " + target + " dies awestruck by FR4G-TP's skills!";
	printer(message);
}