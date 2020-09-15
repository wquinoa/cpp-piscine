/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:42:31 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/15 03:11:36 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim
{
public:
	Victim(std::string name);
	~Victim();
	Victim			&operator=(const Victim &src);
	std::string		getName(void) const;
	virtual void	getPolymorphed() const;

protected:
	Victim();
	std::string name;
};

std::ostream		&operator<<(std::ostream &stream, Victim const & vic);

#endif