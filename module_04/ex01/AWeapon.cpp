/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/15 06:41:33 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &copy)
{
	name = copy.getName();
	apcost = copy.getAPCost();
	damage = copy.getDamage();
}

AWeapon::~AWeapon()
{
	;
}

AWeapon		&AWeapon::operator=(const AWeapon &copy)
{
	apcost = copy.getAPCost();
	damage = copy.getDamage();
	name = copy.getName();
	return (*this);
}

std::string	AWeapon::getName() const
{
	return (this->name);
}

int			AWeapon::getAPCost() const
{
	return (this->apcost);
}

int			AWeapon::getDamage() const
{
	return (this->damage);
}