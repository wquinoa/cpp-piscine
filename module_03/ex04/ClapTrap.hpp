/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 21:59:03 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/30 23:27:45 by wquinoa          ###   ########.fr       */
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
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);

	std::string		getName() const;
	int				getMelee() const;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	virtual	void	meleeAttack(std::string const &);
	virtual	void	rangedAttack(std::string const &);

protected:
	ClapTrap();
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
