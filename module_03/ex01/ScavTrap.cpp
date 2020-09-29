/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 21:51:32 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void		printer(std::string message)
{
	message = "\033[0m" + message;
	for (size_t i = 0; i <= message.length(); i++)
	{
		std::cerr << message.substr(0, i);
		std::cerr << (i != message.length() ? "\u2588\r" : "\r");
		std::cerr << std::flush;
		usleep(5000);
	}
	usleep(90000);
	std::cerr << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	srand(time(0));
	Name = name;
	Hp = 100;
	maxHp = 100;
	Ep = 50;
	maxEp = 50;
	level = 1;
	melee = 20;
	ranged = 15;
	dmgReduction= 3;
	printer("Ahh, the smell of that crisp Pandoran air!");
}

ScavTrap::~ScavTrap()
{
	printer("Am dead");
	std::cerr << std::endl;
}

void	ScavTrap::randgedAttack(std::string const &target)
{
	std::string message = "SC4V-TP " + Name + " shoots " + target + \
		", causing " + std::to_string(ranged) + " damamge!";
	printer(message);
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::string message = "SC4V-TP " + Name;
	Ep -= 30;
	Ep = Ep < 0 ? 0 : Ep;
	if (Ep > 0)
	{
		message += " swings at " + target + ", causing " + \
		std::to_string(melee) + " damamge and a huge bruise!";
	}
	else
		message += " awkwardly stumbles as he doesn't have enough energy to attack";
	printer(message);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned long reduced = amount > (unsigned int)dmgReduction ? amount - dmgReduction : 0;
	std::string amt = REDIFY(std::to_string(reduced));
	std::string message = "SC4V-TP " + Name + " takes " + amt + " damage. ";

	Hp -= amount;
	Hp = Hp < 0 ? 0 : Hp;
	if (Hp >= 80)
		message += "Pathetic.";
	else if (Hp >= 60)
		message += "His armor gets dented!";
	else if (Hp >= 40)
		message += "His wheel gets bent!";
	else if (Hp >= 20)
		message += "His arm falls off!";
	else if (Hp > 0)
	{
		Hp = 0;
		message += "He's barely moving at this point!";
	}
	else	
	{
		Hp = 0;
		message += "He's super-dead already, just stop!";
	}
	printer(message);
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::string amt = GREENIFY(std::to_string(amount));
	std::string message;

	Hp += amount;
	if (Hp > 100)
	{
		Hp = 100;
		printer("There are rumors that overhealing may cause brain damage.");
		message = "Thankfully, " + Name + " does not have a brain because he is a robot.";
	}
	else
	{
		message = "SC4V-TP " + Name + " is healed for " + amt + ".";
		printer(message);
		message = " Thank you, minion!";
	}
	usleep(50000);
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