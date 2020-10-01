/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/01 21:11:20 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	ClapTrap::Name = name;
	ClapTrap::Hp = 100;
	ClapTrap::Ep = 50;
	ClapTrap::maxEp = 50;
	ClapTrap::maxHp = 100;
	ClapTrap::level = 1;
	ClapTrap::melee = 20;
	ClapTrap::ranged = 15;
	ClapTrap::dmgReduction = 3;
	printer("Ahh, the smell of that crisp Pandoran air!");
}

ScavTrap::~ScavTrap()
{
	printer("Am dead");
	std::cerr << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	return ((ScavTrap &)ClapTrap::operator=(copy));
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::string message = "SC4V-TP " + Name;

	Ep -= 30;
	Ep = Ep < 0 ? 0 : Ep;
	if (Ep > 0)
	{
		message += " lacerates " + target + ", who bleeds for" + \
		std::to_string(melee) + " hp!";
	}
	else
		message += " doesn't have enough energy to attack";
	printer(message);
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::string message = "SC4V-TP " + Name + " shoots " + target + \
		", causing " + std::to_string(ranged) + " damamge!";
	printer(message);
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string message = "";
	std::string	options[5] = {
		"kill a bullymong",
		"befriend a psycho",
		"burn 20 varkids",
		"use explosive weapons",
		"bring 10 eridium"
	};

	message += "SC4V-TP " + Name + " challenges " + target + " to " + options[rand() % 5] + "!";
	printer(message);
}