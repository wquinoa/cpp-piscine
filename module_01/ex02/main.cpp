/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:33:41 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:10:16 by wquinoa          ###   ########.fr       */
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
