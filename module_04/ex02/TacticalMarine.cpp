/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 03:59:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/10 07:56:52 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "* teleports from space *"  << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "I’ll be back..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy)
{
	(void)copy;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &copy)
{
	(void)copy;
	return (*this);
}

// Member f

TacticalMarine	*TacticalMarine::clone() const
{
	TacticalMarine *a = new TacticalMarine(*this);

	return (a);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
