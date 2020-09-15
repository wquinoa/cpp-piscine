/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:13 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/15 06:38:28 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:
	Character(std::string const &name);
	Character(const Character &copy);
	~Character();
	Character &operator=(const Character &copy);

	void				recoverAP();
	void				equip(AWeapon *ptr);
	void				attack(Enemy *badguy);
	std::string			getName() const;
	int					getAP() const;
	AWeapon				*getWeapon() const;

private:
	int					ap;
	AWeapon				*weapon;
	std::string			name;
	Character();
};

std::ostream &operator<<(std::ostream &stream, const Character &copy);

#endif
