/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 03:58:15 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/11 09:10:27 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad();
	Squad(const Squad &copy);
	~Squad();
	Squad &operator=(const Squad &copy);

	int				getCount() const;
	ISpaceMarine*	getUnit(int) const;
	int				push(ISpaceMarine*);

protected:
	Squad(int);

private:
	ISpaceMarine	**platoon;
	size_t			count;
};

#endif
