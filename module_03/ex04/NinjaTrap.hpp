/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:26:43 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/30 20:17:32 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string const &);
	NinjaTrap(const NinjaTrap &copy);
	~NinjaTrap();
	NinjaTrap &operator=(const NinjaTrap &copy);
	
	void	meleeAttack(std::string const &);
	void	rangedAttack(std::string const &);

	void	ninjaShoebox(const NinjaTrap &copy);
	void	ninjaShoebox(const ScavTrap &copy);
	void	ninjaShoebox(const FragTrap &copy);

};

#endif
