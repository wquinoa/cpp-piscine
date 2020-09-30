/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:26:43 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/30 20:22:24 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap(name)
{
	std::string message("* Teleports behind you *");

	Hp = 60;
	maxHp = 60;
	Ep = 120;
	maxEp = 120;
	level = 1;
	melee = 60;
	ranged = 5;
	dmgReduction = 0;
	printer(message);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "* FWOOSH *" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &copy)
{
	return ((NinjaTrap &)ClapTrap::operator=(copy));
}

void		NinjaTrap::meleeAttack(std::string const &target)
{
	std::string message = "NINJ4-TP " + GREENIFY(Name) + " slashes " +\
	REDIFY(target) + " for " + std::to_string(melee) + " Damage!";

	printer(message);
}

void		NinjaTrap::rangedAttack(std::string const &target)
{
	std::string message = "NINJ4-TP " + GREENIFY(Name) + " throws a kunai, dealing " +\
	std::to_string(ranged) + " damage to " + REDIFY(target);

	printer(message);
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &copy)
{
	std::string message = "NINJ4-TP " + GREENIFY(Name) + " hight-fives ";
	if (Name != copy.getName())
		message += copy.getName();
	else
		message += "himself!";
	printer(message);
}

void	NinjaTrap::ninjaShoebox(const ScavTrap &copy)
{
	std::string message = "NINJ4-TP " + GREENIFY(Name) + " is healed by " + copy.getName();
	printer(message);
	beRepaired(30);
}

void	NinjaTrap::ninjaShoebox(const FragTrap &copy)
{
	printer(std::string("A battle ensues!"));
	meleeAttack(copy.getName());
	takeDamage(copy.getMelee());
}