/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/12 23:55:58 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy)
{
	(void)copy;
}

Ice	&Ice::operator=(const Ice &copy)
{
	return (*this);
}

void				Ice::use(ICharacter &guy)
{
	unsigned newXp = AMateria::getXp() + 10;
	AMateria::setType();
}

Ice			*Ice::clone() const
{
	Ice *hi = new Ice(*this);
}

unsigned int		Ice::getXP() const
{

}

std::string const	&Ice::getType() const
{

}
