/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 12:53:06 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/16 19:59:54 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
}

Intern			&Intern::operator=(const Intern &copy)
{
	return (*this);
}

Form		*Intern::getRobo(std::string _target)
{
	return NULL;
}

Form		*Intern::getForm(std::string _target)
{
	return NULL;
}

Form		*Intern::makeForm(std::string type, std::string _target)
{
	std::string		options[3] = { "robotomy reqest", "presidential pardon", "shrubbery creation" };
	Form* 			(Intern::*folder[])(std::string) = {&getRobo, &getShrub, &getPresi};
	for (int i = 0; i < 3; i++)
	{
		if (options[i] == type)
		{
			Form * tmp = (this->*folder[i])(_target);
			return tmp;
		}
	}
	return nullptr;
}