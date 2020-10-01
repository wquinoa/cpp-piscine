/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/01 19:09:26 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	for (int i = 0; i < 5; i++)
	{
		std::cout << message;
		std::cout << (i & 1 ? "\u2588\r" : " \r");
		std::cout << std::flush;
	}
	usleep(90000);
	std::cout << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	srand(time(0));
	Name = name;
	Hp = 100;
	level = 1;
	Ep = 100;
	maxHp = 100;
	maxEp = 100;
	melee = 30;
	ranged = 20;
	dmgReduction = 5;
	printer("PREPARE TO DIE!");
}

FragTrap::~FragTrap()
{
	printer("SELF DESTRUCT IMMINENT");
}

FragTrap::FragTrap(const FragTrap &copy)
{
	memcpy((void *)this, (void*)&copy, sizeof(FragTrap));;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	memcpy((void *)this, (void*)&copy, sizeof(FragTrap));;
	return (*this);
}

void	FragTrap::randgedAttack(std::string const &target)
{
	std::string message = "FR4G-TP " + Name + " shoots " + target + \
		", causing " + std::to_string(ranged) + " damamge!";
	printer(message);
}

void	FragTrap::meleeAttack(std::string const &target)
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

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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