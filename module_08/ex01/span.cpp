/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:30:17 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/21 12:56:03 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned amount) : size(amount)
{
 //   if (i == 0)
	tab = new int[amount];
}

Span::Span(const Span & copy) : size(copy.size) 
{
	memcpy(tab, copy.tab, size * sizeof(int));
	//for (int i = 0; i < size; i++)
		//tab[i] = copy.tab[i];
}

Span		&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		size = copy.size;
		memcpy(tab, copy.tab, size * sizeof(int));
		//for (int i = 0; i < size; i++)
			//tab[i] = copy.tab[i];
	}
	return (*this);
}

Span::~Span()
{
	if (tab != NULL)
		delete[] tab;
}

void		Span::addNumber(int n)
{
	if (fill < size)
		tab[fill++] = n;
	//else
		//throw ;
}

unsigned	Span::shorestSpan() const
{

}

unsigned	Span::longestSpan() const
{

}
