/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:33:41 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 03:28:37 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	newZ;
	Zombie		*zombie;
	std::string	types[12] = {"normal", "vegan", "boring", "feeble", "scary", \
							"stinky", "grating", "hipster", "\"friendly\"",
							"crawler", "weird", "whatever"};

	newZ.setZombieType("test");

	zombie = newZ.newZombie("bumpy");
	zombie->announce();
	delete zombie;

	std::srand(time(NULL));
	for (int i = 0; i < 12; i++)
	{
		newZ.setZombieType(types[std::rand() % 12]);
		newZ.randomChump();
	}
	return (0);
}
