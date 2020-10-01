/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 21:10:42 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/01 21:12:40 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
protected:
	SuperTrap();
public:
	SuperTrap(std::string const &);
	SuperTrap(const SuperTrap &copy);
	~SuperTrap();
	SuperTrap &operator=(const SuperTrap &copy);
	void	rangedAttack(std::string const &);
	void	meleeAttack(std::string const &);

};

#endif
