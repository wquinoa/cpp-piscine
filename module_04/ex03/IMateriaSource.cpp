/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:13:26 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 19:15:07 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	collection_ = NULL;
	coll_size = 0;
}

IMateriaSource::IMateriaSource(const IMateriaSource &copy)
{
}

IMateriaSource	&IMateriaSource::operator=(const IMateriaSource &copy)
{
	return (*this);
}

void			IMateriaSource::learnMateria(AMateria *mat)
{
	if (coll_size < 4)
	{
	}
}
