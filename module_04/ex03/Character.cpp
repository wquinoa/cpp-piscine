/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 20:08:44 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name)
{
	_name = name;
	bzero(inventory, sizeof(*inventory));
}

Character::Character(Character const &someguy)
{
	_name = someguy.getName();
	for (int i = 0; i < 5; i++)
		inventory[i] = someguy.inventory[i]->clone();
}

Character::~Character()
{
	for (int i = 0; inventory[i]; i++)
		delete inventory[i];
}


Character	&Character::operator=(const Character &copy)
{
	if (this != &copy)
		*this = Character(copy);
	return (*this);
}

std::string const	&Character::getName() const
{
	return (_name);
}

void				Character::equip(AMateria *m)
{
	int i = 0;

	while (inventory[i])
		i++;
	if (i < 4)
		inventory[i] = m;
}

void				Character::unequip(int i)
{
	if (i >= 0 && i <= 3 && inventory[i] != NULL)
		inventory[i] = NULL;
	else
		std::cout << "This is an empty slot" << std::endl;
	
}

void				Character::use(int i, ICharacter &someguy)
{
	if (i >= 0 && i <= 3 && inventory[i] != NULL)
		inventory[i]->use(someguy);
	else
		std::cout << "This is an empty slot" << std::endl;
}
