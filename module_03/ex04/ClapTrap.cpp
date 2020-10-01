/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 21:59:03 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/30 23:27:24 by wquinoa          ###   ########.fr       */
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

// C. form

ClapTrap::ClapTrap(std::string name)
{
	Name = name;
	std::cout << "A star was born!" << std::endl;
	srand(time(0));
}

ClapTrap::ClapTrap()
{
}

ClapTrap::~ClapTrap()
{
	std::cout << "My eye AHHH..." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	memcpy((void *)this, (void*)&copy, sizeof(ClapTrap));;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	memcpy((void *)this, (void*)&copy, sizeof(ClapTrap));;
	return (*this);
}

// Member functions

std::string	ClapTrap::getName() const
{
	return (Name);
}

int		ClapTrap::getMelee() const
{
	return (melee);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	(void)target;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	(void)target;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned long reduced = amount > (unsigned int)dmgReduction ? amount - dmgReduction : 0;
	std::string amt = REDIFY(std::to_string(reduced));
	std::string message = Name + " takes " + amt + " damage. ";

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
		message = Name + " is healed for " + amt + ".";
		printer(message);
		message = " Thank you, minion!";
	}
	usleep(50000);
	printer(message);
}
