/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 20:03:56 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"

class ICharacter
{
public:
	virtual 					~ICharacter() {}
	virtual std::string const	&getName() const = 0;
	virtual void				equip(AMateria *m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter &target) = 0;

};

#endif
