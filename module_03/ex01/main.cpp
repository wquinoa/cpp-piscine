/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 21:43:24 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	bill(GREENIFY(std::string("bill")));
	std::string	target = REDIFY(std::string("psycho"));

	std::cout << std::endl;
	bill.meleeAttack(target);
	bill.randgedAttack(target);

	std::cout << std::endl;
	for (int i = 0; i < 7; i++)
		bill.takeDamage(25 - (i == 3));

	std::cout << std::endl;
	bill.beRepaired(80);
	bill.beRepaired(80);

	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		bill.challengeNewcomer(target);
	std::cout << std::endl;
	return (0);
}
