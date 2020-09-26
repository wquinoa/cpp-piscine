/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:45:55 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/27 01:26:31 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <unistd.h>
# include <ctime>
# define GREENIFY(x) ("\033[32;1m" + x + "\033[0;m")
# define REDIFY(x) ("\033[31;1m" + x + "\033[0;m")

class FragTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap &operator=(const FragTrap &copy);

	void	randgedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const &target);

private:
	static const int	maxHp = 100;
	static const int	maxEp = 100;
	static const int	melee = 30;
	static const int	ranged = 20;
	static const int	dmgReduction = 5;
	int					level;
	long long			Hp;
	long long			Ep;
	std::string			Name;

};

void	printer(std::string);

#endif
