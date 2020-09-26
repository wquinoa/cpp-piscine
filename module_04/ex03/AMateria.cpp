/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 16:20:13 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	xp_ = copy.getXP();
	type_ = copy.getType();
}

std::string const	&AMateria::getType() const
{
	return (type_);
}

unsigned int		AMateria::getXP() const
{
	return (xp_);
}

AMateria			&AMateria::operator=(const AMateria &copy)
{
	xp_ = copy.getXP();
	type_ = copy.getType();
	return (*this);
}

void				AMateria::use(ICharacter &tartget)
{
	(void)tartget;
	xp_ += 10;
}