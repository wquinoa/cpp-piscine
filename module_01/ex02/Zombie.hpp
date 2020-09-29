/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 02:21:22 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 18:13:43 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# define REDIFY(x) "\033[2;35m" + std::string(x) + "\033[0m"
# define GREENIFY(x) "\033[2;33m" + std::string(x) + "\033[0m"

class Zombie
{
public:
	Zombie(std::string, std::string);
	void		announce(void);
	void		setName(std::string) const;
	void		setType(std::string) const;

private:
	std::string	name;
	std::string	type;
};

#endif