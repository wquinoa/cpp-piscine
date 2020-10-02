/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/02 03:30:00 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &copy)
{
	hp = copy.getHP();
	type = copy.getType();
}

Enemy			&Enemy::operator=(const Enemy &copy)
{
	hp = copy.getHP();
	type = copy.getType();
	return (*this);
}

void			Enemy::takeDamage(int dmg)
{
	if (dmg > hp)
		dmg = hp;
	hp -= dmg;
}

int				Enemy::getHP() const
{
	return (this->hp);
}

std::string		Enemy::getType() const
{
	return (this->type);
}