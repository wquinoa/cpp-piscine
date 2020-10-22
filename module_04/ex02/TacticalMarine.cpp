/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 03:59:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/21 12:36:35 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!"  << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
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
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout <<  "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
