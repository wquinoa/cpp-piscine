/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:13:26 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/12 15:21:07 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual				~IMateriaSource() {}
	virtual void		learnMateria(AMateria *) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;

};

#endif
