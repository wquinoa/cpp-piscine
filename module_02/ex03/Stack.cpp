/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:21:26 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/26 20:37:26 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stack.hpp"

Stack::Stack()
{
	stack = new std::string[0];
	size = 0;
}

Stack::~Stack()
{
	if (stack)
		delete stack;
}

void	Stack::push(std::string token)
{
	size++;
	std::string *copy = new std::string[size];

	for (int i = 0; i < size; i++)
		copy[i] = stack[i];
	copy[size] = token;
	stack = copy; // delete ?
}

std::string	Stack::pop(void)
{
	if (size > 0)
	{
		size--;
		std::string *copy = new std::string[size];

		for (int i = 0; i < size; i++)
			copy[i] = stack[i];
		stack = copy; // delete?
		return (stack[size + 1]);
	}
	return (NULL);
}

std::string	Stack::peek() const
{
	return(stack[size]);
}