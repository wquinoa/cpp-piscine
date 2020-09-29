/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 21:51:02 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	wait_for_it()
{
	std::cout << "\nPress enter to continue." << std::endl;
	while (std::cin.get() != '\n')
		;
}

int		main(void)
{
	FragTrap	bill(GREENIFY(std::string("bill")));
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
		bill.vaulthunter_dot_exe(target);
	std::cout << std::endl;
	return (0);
}
