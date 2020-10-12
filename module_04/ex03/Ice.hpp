/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/12 23:39:34 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	inline Ice(const Ice &copy);
	~Ice();
	Ice &operator=(const Ice &copy);

	void				use(ICharacter &);
	Ice					*clone() const = 0;
	unsigned int		getXP() const;
	std::string const	&getType() const;
};

#endif
