/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:21:26 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/26 20:39:27 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
# define STACK_HPP
# include <iostream>

class Stack
{
public:
	Stack();
	Stack(const Stack &copy);
	~Stack();
	Stack &operator=(const Stack &copy);

	void		push(std::string);
	std::string	pop();
	std::string	peek() const;

private:
	std::string *stack;
	size_t		size;
};

#endif
