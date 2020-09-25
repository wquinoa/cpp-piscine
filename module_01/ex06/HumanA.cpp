/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:47:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/24 16:18:43 by wquinoa          ###   ########.fr       */
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
	std::cout << name << " attacks with his " << \
	weapon.getType() << std::endl;
}
