/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/15 06:30:43 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 31)
{
	;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy)
{
	;
}

PlasmaRifle::~PlasmaRifle()
{
	;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle & copy)
{
	this->name = copy.getName();
	this->damage = copy.getDamage();
	this->apcost = copy.getDamage();
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}