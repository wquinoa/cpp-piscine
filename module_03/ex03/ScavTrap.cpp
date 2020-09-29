/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 23:42:42 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	ClapTrap::Name = name;
	ClapTrap::Hp = 100;
	ClapTrap::Ep = 50;
	ClapTrap::maxEp = 50;
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

//void	ScavTrap::meleeAttack(std::string const &target) : ClapTrap::meleeAttack(target);
//{
//}

//void	ScavTrap::takeDamage(unsigned int amount)
//{
	//unsigned long reduced = amount > (unsigned int)dmgReduction ? amount - dmgReduction : 0;
	//std::string amt = REDIFY(std::to_string(reduced));
	//std::string message = "SC4V-TP " + Name + " takes " + amt + " damage. ";

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
	//{
		//Hp = 0;
		//message += "He's barely moving at this point!";
	//}
	//else	
	//{
		//Hp = 0;
		//message += "He's super-dead already, just stop!";
	//}
	//printer(message);
//}

//void	ScavTrap::beRepaired(unsigned int amount)
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
		//message = "SC4V-TP " + Name + " is healed for " + amt + ".";
		//printer(message);
		//message = " Thank you, minion!";
	//}
	//usleep(50000);
	//printer(message);
//}

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