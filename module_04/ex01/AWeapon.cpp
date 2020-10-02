/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/02 00:34:01 by wquinoa          ###   ########.fr       */
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
	return (name);
}

int			AWeapon::getAPCost() const
{
	return (apcost);
}

int			AWeapon::getDamage() const
{
	return (damage);
}