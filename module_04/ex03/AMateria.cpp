/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/12 23:53:11 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	_xp = 0;
}

AMateria::AMateria(std::string const &type)
{
	_xp = 0;
	_type = type;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	_xp = copy.getXP();
	_type = copy.getType();
}

std::string const	&AMateria::getType() const
{
	return (_type);
}

unsigned int		AMateria::getXP() const
{
	return (_xp);
}

AMateria			&AMateria::operator=(const AMateria &copy)
{
	_xp = copy.getXP();
	_type = copy.getType();
	return (*this);
}

void				AMateria::use(ICharacter &tartget)
{
	(void)tartget;
	_xp += 10;
}
