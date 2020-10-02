/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/02 03:43:26 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::~Character()
{
}

Character::Character(const Character &copy)
{
	this->ap = copy.ap;
	this->name = copy.name;
	this->weapon = copy.weapon;
	*this = copy;
}

int				Character::getAP() const
{
	return (ap);
}

std::string		Character::getName() const
{
	return (this->name);
}

AWeapon			*Character::getWeapon() const
{
	return (this->weapon);
}

Character		&Character::operator=(const Character &copy)
{
	name = copy.name;
	weapon = copy.weapon;
	ap = copy.ap;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Character & copy)
{
	stream << copy.getName() << " has " << copy.getAP() << " AP and ";
	if (copy.getWeapon() == NULL)
		stream << "is unarmed";
	else
		stream << "wields " << copy.getWeapon()->getName();
	stream << std::endl;
	return (stream);
}

void			Character::recoverAP()
{
	if ((ap += 10) > 40)
		ap = 40;
}

void			Character::equip(AWeapon *ptr)
{
	this->weapon = ptr;
}

void			Character::attack(Enemy *badguy)
{
	if (weapon == NULL) 
		std::cout << name << " cannot attack without a weapon!" << std::endl;
	else if ((ap -= weapon->getAPCost()) >= 0)
	{
		if (badguy == NULL)
		{
			std::cout << name << " attacks a dead enemy." << std::endl;
			weapon->attack();
			ap -= weapon->getAPCost();
		}
		else
		{
			std::cout << name << " attacks " << (*badguy).getType() \
			<< " with " << (*weapon).getName() << std::endl;
			weapon->attack();
			(*badguy).takeDamage((*weapon).getDamage());
			if ((*badguy).getHP() <= 0)
				delete badguy;
		}
	}
	else
		std::cout << "Not enough AP to attack." << std::endl;

	ap *= (ap > 0);
}