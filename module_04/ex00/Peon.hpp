/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 22:21:36 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 12:33:42 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(const Peon &p);
	~Peon();
	void	getPolymorphed() const;

	Peon &operator=(const Peon &p);
};

#endif