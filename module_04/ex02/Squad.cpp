/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 08:21:36 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/21 11:50:27 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    platoon = NULL;
    count = 0;
}

Squad::Squad(int n)
{
	platoon = new ISpaceMarine*[n];
	count = n;
}

Squad::Squad(const Squad &copy)
{
    if (platoon)
        delete[] platoon;

	platoon = new ISpaceMarine*[count];

	count = copy.count;
	for (size_t i = 0; i < count; i++)
		platoon[i] = copy.platoon[i]->clone();
}

Squad::~Squad()
{
    for (size_t i = 0; i < count; i++)
        delete platoon[i];
    delete[] platoon;
}

Squad           &Squad::operator=(const Squad &copy)
{
	delete this;
	platoon = new ISpaceMarine*[copy.count];

	count = copy.count;
	for (size_t i = 0; i < count; i++)
		platoon[i] = copy.platoon[i]->clone();
	return (*this);
}

int				Squad::getCount() const
{
    return (count);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
    return (n >= 0 && (size_t)n < count) ? (platoon[n]) : NULL;
}

int				Squad::push(ISpaceMarine* marine)
{
    ISpaceMarine **platoon_1;

    for (size_t i = 0; i < count && count; i++)
    {
        if (marine == platoon[i])
            return (count);
    }
    
    platoon_1 = new ISpaceMarine*[count + 1];
    memcpy(platoon_1, platoon, sizeof(ISpaceMarine *) * count);
    platoon_1[count] = marine;
    if (platoon) delete[] platoon;
    count+=1;
    platoon = platoon_1;
    return (count);
}
