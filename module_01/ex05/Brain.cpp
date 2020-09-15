/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 03:53:51 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 04:40:28 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify() const
{
	std::ostringstream addr;

	addr << this;
	return (addr.str());
}