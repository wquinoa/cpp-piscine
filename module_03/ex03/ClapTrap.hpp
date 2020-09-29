/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 21:59:03 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 23:40:57 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <unistd.h>
# include <ctime>
# define GREENIFY(x) ("\033[32;1m" + x + "\033[0;m")
# define REDIFY(x) ("\033[31;1m" + x + "\033[0;m")

class ClapTrap
{
public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &copy);

	void	randgedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

//private:
protected:
	int					maxHp;
	int					maxEp;
	int					melee;
	int					ranged;
	int					dmgReduction;
	int					level;
	long long			Hp;
	long long			Ep;
	std::string			Name;

};

void	printer(std::string);

#endif
