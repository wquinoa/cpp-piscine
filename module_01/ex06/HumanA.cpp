/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:47:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:45:50 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon) : weapon(newWeapon)
{
	this->name = newName;
}

HumanA::~HumanA()
{
}

HumanA::HumanA(const HumanA &copy) : weapon(copy.weapon)
{
	this->name = copy.name;
}

HumanA	&HumanA::operator=(const HumanA &copy)
{
	this->weapon = copy.weapon;
	this->name = copy.name;
	return (*this);
}

void	HumanA::giveWeapon(Weapon &newWeapon)
{
	this->weapon = newWeapon;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with " << \
	weapon.getType() << std::endl;
}
