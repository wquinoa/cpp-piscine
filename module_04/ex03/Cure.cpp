/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 19:35:35 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const &type) : AMateria(type)
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
}

Cure	&Cure::operator=(const Cure &copy)
{
	return ((Cure &)AMateria::operator=(copy));
}

Cure	*Cure::clone() const
{
	return new Cure("cure");
}

void	Cure::use(ICharacter &character)
{
	addExp();
	std::cout << "* heals " << character.getName() \
			<< "'s wounds *" << std::endl;
}