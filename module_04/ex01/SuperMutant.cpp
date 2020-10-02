/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/02 03:52:49 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
	bzero((void*)this, sizeof(SuperMutant));
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &copy)
{
	(void)copy;
	return (*this);
}

void		SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	hp -= dmg;
	hp = (hp > 0) ? hp : 0;
}