/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 01:50:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 02:06:59 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <stdlib.h>

class Pony
{
public:
	Pony(std::string name);
	~Pony(void);
	void	talk(void);
	void	run(void);

private:
	std::string	_name;
};

void	ponyOnTheStack(std::string name);
void	ponyOnTheHeap(std::string name);

#endif