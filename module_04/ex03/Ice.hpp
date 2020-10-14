/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 19:54:19 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	inline Ice(std::string const &type);
	Ice(const Ice &copy);
	~Ice();
	Ice &operator=(const Ice &copy);

	void				use(ICharacter &);
	Ice					*clone() const = 0;
};

#endif
