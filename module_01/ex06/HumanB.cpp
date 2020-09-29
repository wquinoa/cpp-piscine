/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:47:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:46:01 by wquinoa          ###   ########.fr       */
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
	std::cout << name << " attacks with " << \
	weapon->getType() << std::endl;
}