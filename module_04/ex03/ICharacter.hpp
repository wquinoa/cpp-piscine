/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 18:17:39 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"

class ICharacter
{
public:
	ICharacter(std::string);
	ICharacter(const ICharacter &copy);
	ICharacter &operator=(const ICharacter &copy);
	virtual ~ICharacter() {}
	virtual std::string const	&getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter &target) = 0;

private: // portected ?
	ICharacter();
	AMateria	*inventory_; //array ?
	std::string	name_;
};

#endif
