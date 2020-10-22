/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:30:17 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 22:49:59 by wquinoa          ###   ########.fr       */
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
	std::memcpy(tab, copy.tab, size * sizeof(int));
	//for (int i = 0; i < size; i++)
		//tab[i] = copy.tab[i];
}

Span		&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		size = copy.size;
		std::memcpy(tab, copy.tab, size * sizeof(int));
		//for (int i = 0; i < size; i++)
			//tab[i] = copy.tab[i];
	}
	return (*this);
}

int			&Span::operator[](int i)
{
	if ((unsigned)i < fill && i >= 0)
		return (tab[i]);
	throw OutOfRangeException();
}

const int	&Span::operator[](int i) const
{
	if ((unsigned)i < fill && i >= 0)
		return (tab[i]);
	throw OutOfRangeException();
}

//const Span	&Span::operator++(int)
//{
	//Span temp = *this;

	//++*this;
	//return temp;
//}

//Span		&Span::operator++()
//{

//}

//const Span	&Span::operator--(int i)
//{

//}

//Span		&Span::operator--()
//{

//}

Span::~Span()
{
	if (tab != NULL)
		delete[] tab;
}

void		Span::addNumber(int n)
{
	if (fill < size)
		tab[fill++] = n;
	throw OutOfRangeException();
}

unsigned	Span::shorestSpan() const
{
	return (0);
}

unsigned	Span::longestSpan() const
{
	return (0);
}

int			&Span::iterator::operator*() const
{
	return (*data);
}

const Span::iterator	Span::iterator::operator++(int)//post
{
	iterator temp = data;
	++data;
	return (temp);
}
	
Span::iterator	&Span::iterator::operator++()	//pre
{
	++data;
	return (*this);
}
