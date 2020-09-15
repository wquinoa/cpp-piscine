/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 04:25:29 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 04:42:21 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string	Human::identify(void)
{
	return (brain.identify());
}

const Brain	&Human::getBrain(void)
{
	return (brain);
}