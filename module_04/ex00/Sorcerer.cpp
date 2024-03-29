/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:11:35 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 12:34:02 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string newName, std::string newTitle)
{
	name = newName;
	title = newTitle;
	std::cout << name + ", " + title + ", " << "is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & copy) : name(copy.name), title(copy.title)
{
	std::cout << name + ", " + title + ", " << "is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name + ", " + title + ", " << "is dead. Consequences will never be the same!" << std::endl;
}

std::string		Sorcerer::getName() const
{
	return (this->name);
}

std::string		Sorcerer::getTitle() const
{
	return (this->title);
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &sorc)
{
	if (this != &sorc)
	{
		name = sorc.name;
		title = sorc.title;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Sorcerer &sorc)
{
	stream << "I am " << sorc.getName() << ", " + sorc.getTitle();
	stream << ", and I like ponies!" << std::endl;
	return (stream);
}

void			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}