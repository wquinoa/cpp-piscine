/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:23:10 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:14:33 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::srand(time(NULL));
}

void	ZombieEvent::setZombieType(std::string newType)
{
	eventType = newType;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZ = new Zombie(name, eventType);

	return (newZ);
}

void	ZombieEvent::randomChump(void)
{
	std::string		names[12] = {"wquinoa", "kwillum", "ltheresi", "bbrynn",
								"lclaudet", "mlouann", "rvilkas", "ndreadno",
								 "jalvaro", "drina", "hurek", "salec"};
	Zombie			rando = Zombie(names[rand() % 12], eventType);

	rando.announce();
}
