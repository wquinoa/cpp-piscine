/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/12 22:37:34 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	collection_ = NULL;
	coll_size = 0;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	return (*this);
}

void			learnMateria(AMateria *materia)
{
	
}

void			learnMateria(AMateria *to_learn)
{

}

AMateria		*createMateria(std::string const &type);