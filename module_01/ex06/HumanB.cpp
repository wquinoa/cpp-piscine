/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:47:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 12:17:01 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName)
{
	this->name = newName;
}

HumanB::~HumanB()
{

}

HumanB::HumanB(const HumanB &copy) : weapon(copy.weapon)
{
	this->name = copy.name;
}

HumanB	&HumanB::operator=(const HumanB &copy)
{
	this->weapon = copy.weapon;
	this->name = copy.name;
	return (*this);
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << \
	weapon->getType() << std::endl;
}