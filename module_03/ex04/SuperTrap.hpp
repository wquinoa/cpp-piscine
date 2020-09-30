/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 20:31:18 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/30 20:31:18 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>

class SuperTrap
{
public:
	SuperTrap();
	SuperTrap(const SuperTrap &copy);
	~SuperTrap();
	SuperTrap &operator=(const SuperTrap &copy);

private:
};

#endif
