/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 23:52:56 by wquinoa          ###   ########.fr       */
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
	usleep(90000);
	std::cout << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	srand(time(0));
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

//void	FragTrap::randgedAttack(std::string const &target)
//{
	//std::string message = "FR4G-TP " + Name + " shoots " + target + \
		//", causing " + std::to_string(ranged) + " damamge!";
	//printer(message);
//}

//void	FragTrap::meleeAttack(std::string const &target)
//{
	//std::string message = "FR4G-TP " + Name;
	//Ep -= 30;
	//Ep = Ep < 0 ? 0 : Ep;
	//if (Ep > 0)
	//{
		//message += " swings at " + target + ", causing " + \
		//std::to_string(melee) + " damamge and a huge bruise!";
	//}
	//else
		//message += " awkwardly stumbles as he doesn't have enough energy to attack";
	//printer(message);
//}

//void	FragTrap::takeDamage(unsigned int amount)
//{
	//unsigned long reduced = amount > (unsigned int)dmgReduction ? amount - dmgReduction : 0;
	//std::string amt = REDIFY(std::to_string(reduced));
	//std::string message = "FR4G-TP " + Name + " takes " + amt + " damage. ";

	//Hp -= amount;
	//Hp = Hp < 0 ? 0 : Hp;
	//if (Hp >= 80)
		//message += "Pathetic.";
	//else if (Hp >= 60)
		//message += "His armor gets dented!";
	//else if (Hp >= 40)
		//message += "His wheel gets bent!";
	//else if (Hp >= 20)
		//message += "His arm falls off!";
	//else if (Hp > 0)
		//message += "He's barely moving at this point!";
	//else
	//{
		//Hp = 0;
		//message += "He's super-dead already, just stop!";
	//}
	//printer(message);
//}

//void	FragTrap::beRepaired(unsigned int amount)
//{
	//std::string amt = GREENIFY(std::to_string(amount));
	//std::string message;

	//Hp += amount;
	//if (Hp > 100)
	//{
		//Hp = 100;
		//printer("There are rumors that overhealing may cause brain damage.");
		//message = "Thankfully, " + Name + " does not have a brain because he is a robot.";
	//}
	//else
	//{
		//message = "FR4G-TP " + Name + " is healed for " + amt + ".";
		//printer(message);
		//message = " Thank you, minion!";
	//}
	//usleep(50000);
	//printer(message);
//}

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