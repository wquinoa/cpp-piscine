/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 21:10:42 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/02 00:12:14 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	Hp = 100;
	maxHp = 100;
	Ep = 120;
	maxEp = 120;
	level = 1;
	Name = name;
	melee = 60;
	ranged = 20;
	dmgReduction = 5;
}

SuperTrap::~SuperTrap()
{
}

SuperTrap::SuperTrap()
{
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy)
{
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &copy)
{
	memcpy((void *)this, (void *)&copy, sizeof(SuperTrap));
	return (*this);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}
