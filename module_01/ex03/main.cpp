/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:33:41 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 03:45:44 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde	*horde;

	horde = new ZombieHorde(12);
	horde->announce();
	delete horde;

	return (0);
}
