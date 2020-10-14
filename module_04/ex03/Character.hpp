/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 17:04:57 by wquinoa          ###   ########.fr       */
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

private:
	AMateria			*inventory[5];
	std::string			_name;
};

#endif
