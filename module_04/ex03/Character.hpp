/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 12:57:49 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(std::string const &);
	Character(const Character &copy);
	~Character();
	Character &operator=(const Character &copy);

	std::string const	&getName() const;
	void				equip(AMateria *);
	void				unequip(int i);
	void				use(int i, ICharacter &target);
	AMateria			*returnMateria(unsigned i) const;

private:
	AMateria			*inventory[5];
	std::string			_name;
};

#endif
