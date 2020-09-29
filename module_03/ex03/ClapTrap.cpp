/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 21:59:03 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 23:27:26 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void		printer(std::string message)
{
	message = "\033[0m" + message;
	for (size_t i = 0; i <= message.length(); i++)
	{
		std::cout << message.substr(0, i);
		std::cout << (i != message.length() ? "\u2588\r" : "\r");
		std::cout << std::flush;
		usleep(5000);
	}
	usleep(90000);
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "A star was born!" << std::endl;
	srand(time(0));
}

ClapTrap::~ClapTrap()
{
	std::cout << "My eye AHHH..." << std::endl;
}

void	ClapTrap::randgedAttack(std::string const &target)
{
	std::string message = "FR4G-TP " + Name + " shoots " + target + \
		", causing " + std::to_string(ranged) + " damamge!";
	printer(message);
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::string message = "FR4G-TP " + Name;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned long reduced = amount > (unsigned int)dmgReduction ? amount - dmgReduction : 0;
	std::string amt = REDIFY(std::to_string(reduced));
	std::string message = "FR4G-TP " + Name + " takes " + amt + " damage. ";

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
		message += "He's barely moving at this point!";
	else
	{
		Hp = 0;
		message += "He's super-dead already, just stop!";
	}
	printer(message);
}

void	ClapTrap::beRepaired(unsigned int amount)
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
		message = "FR4G-TP " + Name + " is healed for " + amt + ".";
		printer(message);
		message = " Thank you, minion!";
	}
	usleep(50000);
	printer(message);
}
