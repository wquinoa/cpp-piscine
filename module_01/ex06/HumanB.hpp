/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:47:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 12:17:12 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string);
	HumanB(const HumanB &copy);
	~HumanB();
	HumanB &operator=(const HumanB &copy);
	void	attack();
	void	setWeapon(Weapon &);

private:
	std::string		name;
	Weapon			*weapon;
};

#endif
