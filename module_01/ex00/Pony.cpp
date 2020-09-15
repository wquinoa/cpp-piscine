/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 01:49:33 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 02:17:07 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string name)
{
	Pony	*p;

	p = new Pony(name);
	p->talk();
	p->run();
	delete p;
}

void	ponyOnTheStack(std::string name)
{
	Pony	p(name);

	p.talk();
	p.run();
}

void	Pony::talk(void)
{
	std::cout << _name << " says neigh!" << std::endl;
}

void	Pony::run(void)
{
	int			speed;
	static int	flag;
	std::string	str;

	srand(time(NULL) + flag);
	flag++;
	speed = rand() % 15 + 1;
	str = (speed >= 8) ? " runs at " : " walks at ";
	std::cout << _name << str << speed << \
	" km/h. He looks so free that you become jealous." << std::endl;
}

Pony::Pony(std::string name)
{
	_name = name;
	std::cout << _name << " was \033[32;1mborn\033[0m!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << _name << " has \033[31;1mleft\033[0m us T_T\n" << std::endl;
}
