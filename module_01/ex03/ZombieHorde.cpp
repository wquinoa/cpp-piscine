/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:23:10 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 04:05:01 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	std::string		names[12] = {"wquinoa", "kwillum", "ltheresi", "bbrynn",
								"lclaudet", "mlouann", "rvilkas", "ndreadno",
								 "jalvaro", "drina", "hurek", "salec"};
	std::string		types[12] = {"normal", "vegan", "boring", "feeble", "scary", \
								"stinky", "grating", "hipster", "\"friendly\"",
								"crawler", "weird", "whatever"};

	srand(time(NULL));
	horde = new Zombie[n];
	amount = n;
	for (int i = 0 ; i < n ; i++)
	{
		horde[i].name = names[rand() % 12];
		horde[i].type = types[rand() % 12];
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] horde;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0 ; i < amount ; i++)
		horde[i].announce();
}
