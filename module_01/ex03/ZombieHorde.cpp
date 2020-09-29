/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:23:10 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:31:39 by wquinoa          ###   ########.fr       */
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
	if (n > INT16_MAX)
	{
		n = INT16_MAX;
		std::cerr << "\033[1;31mERROR \033[0m" << "Why would you need so many zombies?" << std::endl;
	}
	else if (n < 1)
	{
		std::cerr << "\033[1;31mERROR \033[0m" << "This is not a horde." << std::endl;
		return ;
	}
	horde = new Zombie[n];
	amount = n;
	for (int i = 0 ; i < n ; i++)
		horde[i] = Zombie(names[rand() % 12], types[rand() % 12]);
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
