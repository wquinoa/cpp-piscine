/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 22:47:18 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	bzero(collection_, sizeof(MateriaSource *) * 5);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (collection_[i] != NULL)
		{
			delete collection_[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 5; i++)
			collection_[i] = copy.collection_[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	*this = MateriaSource(copy);
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *materia)
{
	int i = 0;

	while (collection_[i])
		i++;
	if (i < 4)
		collection_[i] = materia;
	else
		std::cout << "Learn " << REDIFY(materia->getType()) << ": Inventory full" << std::endl;
}


AMateria		*MateriaSource::createMateria(std::string const &type)
{
	AMateria *ret;
	
	for (int i = 0; i < 4; i++)
	{
		if (collection_[i] && collection_[i]->getType() == type)
			return (collection_[i]->clone());
	}
	return (NULL);
}