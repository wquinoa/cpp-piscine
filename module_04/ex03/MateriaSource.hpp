/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/12 22:35:59 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "Amateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	~MateriaSource();
	MateriaSource	&operator=(const MateriaSource &copy);
	void			learnMateria(AMateria *);
	AMateria		*createMateria(std::string const &type);

private:
	AMateria	*collection_;
	short		coll_size;
};

#endif
