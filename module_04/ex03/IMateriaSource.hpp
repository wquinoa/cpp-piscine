/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:13:26 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 19:12:12 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
public:
	IMateriaSource();
	IMateriaSource(const IMateriaSource &copy);
	IMateriaSource &operator=(const IMateriaSource &copy);
	virtual ~IMateriaSource() {}
	virtual void		learnMateria(AMateria *) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;


private:
	AMateria	*collection_;
	short		coll_size;
};

#endif
