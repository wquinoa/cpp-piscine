/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 23:44:54 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <unistd.h>
# include <ctime>
# include "ClapTrap.hpp"
# define GREENIFY(x) ("\033[32;1m" + x + "\033[0;m")
# define REDIFY(x) ("\033[31;1m" + x + "\033[0;m")

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void	challengeNewcomer(std::string const &target);

};

#endif
