/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 03:18:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/15 06:01:08 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
public:
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &copy);
	virtual ~Enemy();
	Enemy &operator=(const Enemy &copy);

	int				getHP() const;
	std::string		getType() const;
	virtual void	takeDamage(int dmg);

protected:
	int				hp;
	std::string		type;

private:
	Enemy();
};

#endif
