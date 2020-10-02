/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 05:52:43 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/02 03:53:55 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

void	test2(Character *me)
{
	std::cout << "\n\n Test 02\n\n\n";

	Enemy* scorp = new RadScorpion();
	Enemy* mutant = new SuperMutant();

	while (me->getAP() > 0)
		me->attack(scorp);
	std::cout << *me;
	for (int i = 0; i < 10; i++)
		me->recoverAP();
	std::cout << *me;
	
	while (mutant->getHP() > 0)
		me->attack(mutant);
	std::cout << *me;
}

int main()
{
	Character* me = new Character("me");

	std::cout << *me;
	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me; 
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(pf);
	test2(me);
	return 0;
}