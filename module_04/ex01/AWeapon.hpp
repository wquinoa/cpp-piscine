/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/15 06:39:32 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon
{
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &copy);
	virtual ~AWeapon();
	AWeapon &operator=(const AWeapon &copy);

	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;

protected:
	std::string		name;
	int				apcost;
	int				damage;

private:
	AWeapon(void);
};

#endif
