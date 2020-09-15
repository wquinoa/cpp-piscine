/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:41:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/15 03:14:50 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string newName)
{
	name = newName;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &vic)
{
	this->name = vic.getName();
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

std::string			Victim::getName() const
{
	return (this->name);
}

Victim				&Victim::operator=(const Victim &vic)
{
	name = vic.getName();
	return (*this);
}

std::ostream		&operator<<(std::ostream &stream, Victim const & vic)
{
	stream << "I'm " << vic.getName() << " and I like otters!" << std::endl;
	return (stream);
}

void				Victim::getPolymorphed() const
{

	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}