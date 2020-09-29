/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:19:53 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:05:20 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string newName, std::string newType)
{
	name = newName;
	type = newType;
}

void	Zombie::announce(void)
{
	std::cout << "My name is " << REDIFY(name.append(8 - name.length(), ' '));
	std::cout << " and i am a " << GREENIFY(type.append(10 - type.length(), ' ')) << " zombie" << std::endl;
}