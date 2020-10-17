/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 12:53:06 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/17 20:55:07 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(std::string _name) : name(_name)
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy) : name(copy.name)
{
}

Intern			&Intern::operator=(const Intern &copy)
{
	*this = Intern(copy);
	return (*this);
}

Form		*Intern::getShrub(std::string _target)
{
	return new ShrubberyCreationForm(_target);
}

Form		*Intern::getPresi(std::string _target)
{
	return new PresidentialPardonForm(_target);
}

Form		*Intern::getRobo(std::string _target)
{
	return new RobotomyRequestForm(_target);
}

const char	*Intern::NoSuchFormException::what() const throw()
{
	return ("the form doesn't exist");
}

Form		*Intern::makeForm(std::string type, std::string _target)
{
	std::string		options[3] = { "robotomy reqest", "presidential pardon", "shrubbery creation" };
	Form			*(Intern::*folder[3])(std::string) = { &Intern::getRobo, &Intern::getPresi, &Intern::getShrub};

	for (int i = 0; i < 3; i++)
	{
		if (options[i] == type)
		{
			Form *tmp = (this->*folder[i])(_target);
			return tmp;
		}
	}
	throw NoSuchFormException();
	return NULL;
}