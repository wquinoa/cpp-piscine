/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/27 01:30:41 by wquinoa          ###   ########.fr       */
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

	wait_for_it();
	bill.meleeAttack(target);
	bill.randgedAttack(target);

	wait_for_it();
	for (int i = 0; i < 7; i++)
		bill.takeDamage(25 - (i == 3));
	wait_for_it();

	bill.beRepaired(80);
	bill.beRepaired(80);
	wait_for_it();

	for (int i = 0; i < 5; i++)
		bill.vaulthunter_dot_exe(target);
	wait_for_it();
	return (0);
}
