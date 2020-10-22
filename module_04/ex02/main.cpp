/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 03:58:15 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 12:44:12 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.cpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"

int		main(void)
{
	ISquad* vlc = new Squad;
	ISpaceMarine *a;

	for (int i = 0; i <= 1000; i++)
	{
		if (i % 2)
			a = new TacticalMarine;
		else
			a = new AssaultTerminator;
		vlc->push(a);
	}
	for (int i = -100; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		if (cur && i % 79 == 0) // getUnit may return NULL
		{
			std::cout << "\n--------\nUnit number: " <<  i << "/" << vlc->getCount() << "\n--------\n" << std::endl;
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
	}
	std::cout << "\ndo a leak check and press enter" << std::endl;
	std::getchar();
	delete vlc;
	return 0;
}
