/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:29:09 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 03:33:03 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class ZombieEvent
{
public:
	void	setZombieType(std::string newType);
	Zombie	*newZombie(std::string name);
	void	randomChump(void);

private:
	std::string	eventType;
};

#endif