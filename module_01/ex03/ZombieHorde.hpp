/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:29:09 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:33:42 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde();
	ZombieHorde(int n);
	~ZombieHorde();
	void	announce(void);

private:
	Zombie	*horde;
	int		amount;
};

#endif