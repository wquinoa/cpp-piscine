/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:47:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/24 16:23:46 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "Fists";
}

Weapon::~Weapon()
{

}

Weapon::Weapon(std::string newType)
{
	this->type = newType;
}

const std::string		&Weapon::getType()
{
	return (this->type);
}

void					Weapon::setType(std::string newtype)
{
	this->type = newtype;
}