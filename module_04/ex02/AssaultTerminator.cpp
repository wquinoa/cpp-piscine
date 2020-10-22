/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 03:58:15 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/21 11:51:53 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports fom space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy)
{
	(void)copy;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &copy)
{
	(void)copy;
	return (*this);
}

AssaultTerminator	*AssaultTerminator::clone() const
{
	AssaultTerminator *a = new AssaultTerminator(*this);

	return (a);
}
void				AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}