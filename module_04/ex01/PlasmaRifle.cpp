/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/02 00:34:43 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle & copy)
{
	return ((PlasmaRifle &)AWeapon::operator=(copy));
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}