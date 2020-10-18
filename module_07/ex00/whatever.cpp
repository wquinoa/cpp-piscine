/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:43:51 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/18 14:11:54 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define GREENIFY(x) ("\033[32m" + (std::string)x + "\033[0;m")

template <class T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T	min(T a, T b)
{
	return (a < b ? a : b);
}

template <class T>
T	max(T a, T b)
{
	return (a > b ? a : b);
}

template <class T>
void    test(T a, T b)
{
    std::cout << std::endl;
	std::cout << "a = " << a << ", b = " << b <<  std::endl;
    //std::cout << GREENIFY("swap") << "(a, b)" << std::endl;
	::swap(a, b);
	//std::cout << "a = " << a << ", b = " << b <<  std::endl;
	std::cout << GREENIFY("min") << "(a, b) = " << ::min(a, b) <<  std::endl;
	std::cout << GREENIFY("max") << "(a, b) = " << ::max(a, b) <<  std::endl;
}

int		main(void)
{
    test(3, 2);
    test("chaine1", "chaine2");
    test(4.2, 2.1);
    test('A', 'Z');

	return (0);
}