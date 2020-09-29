/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 04:25:29 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:43:22 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : myBrain()
{
}

std::string	Human::identify(void)
{
	return (myBrain.identify());
}

const Brain	&Human::getBrain(void)
{
	return (myBrain);
}