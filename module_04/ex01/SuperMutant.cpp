/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/15 06:56:13 by wquinoa          ###   ########.fr       */
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
	if (dmg >= 0)
		hp -= dmg * (dmg < hp);
}