/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:47:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/24 16:23:29 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
public:
	Weapon();
	~Weapon();
	Weapon(std::string type_);
	const std::string	&getType();
	void				setType(std::string newType);

private:
	std::string			type;
};

#endif
