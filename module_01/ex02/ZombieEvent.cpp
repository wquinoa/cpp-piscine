/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:23:10 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 03:29:10 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string newType)
{
	eventType = newType;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZ = new Zombie;

	newZ->name = name;
	newZ->type = eventType;
	return (newZ);
}

void	ZombieEvent::randomChump(void)
{
	Zombie			rando;
	std::string		names[12] = {"wquinoa", "kwillum", "ltheresi", "bbrynn",
								"lclaudet", "mlouann", "rvilkas", "ndreadno",
								 "jalvaro", "drina", "hurek", "salec"};

	rando.name = names[rand() % 12];
	rando.type = eventType;
	rando.announce();
}
