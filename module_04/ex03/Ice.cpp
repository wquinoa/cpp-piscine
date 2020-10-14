/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 19:53:34 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const &name) : AMateria(name)
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
}

Ice					&Ice::operator=(const Ice &copy)
{
	return ((Ice &)AMateria::operator=(copy));
}

void				Ice::use(ICharacter &someguy)
{
	addExp();
	std::cout << "* shoots an ice bolt at " << someguy.getName() << " *" << std::endl;
}

Ice					*Ice::clone() const
{
	return new Ice("ice");
}
