/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:37:08 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/14 16:24:11 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
# define GREENIFY(x) ("\033[32;2m" + (std::string)x + "\033[0m")
# define GREEN(x) ("\033[32m" + (std::string)x + "\033[0;2m")

void	test_list()
{	
	std::list<int> mstack;
	
	mstack.push_front(5);
	mstack.push_front(17);
	mstack.push_front(3);
	mstack.push_front(3);
	mstack.push_front(5);
	mstack.push_front(737);
	mstack.push_front(0);
	mstack.push_front(898);
	mstack.push_front(123131);
	std::cout << GREEN("list test for comparison") << std::endl;
	std::cout << "top         : " << *mstack.begin() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl << std::endl;
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << GREENIFY("normal iterator") << std::endl;
	while (it != ite)
	{
		std::cout << "|" << *it << "| ";
		++it;
	}
	std::cout << std::endl << std::endl;
	std::list<int>::reverse_iterator rit = mstack.rbegin();
	std::list<int>::reverse_iterator rite = mstack.rend();
	std::cout << GREENIFY("reverse iterator") << std::endl;
	while (rit != rite)
	{
		std::cout << "|" << *rit << ": ";
		++rit;
	}
	std::cout << std::endl;
}

int		main(void)
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(898);
	mstack.push(123131);
	std::cout << GREEN("MutantStack test") << std::endl;
	std::cout << "top         : " << mstack.top() << std::endl;

	MutantStack<int> coppppy(mstack);
	std::cout << "copy top    : " << coppppy.top() << std::endl;

	MutantStack<int> assigned = mstack;
	std::cout << "assigned top: " << assigned.top() << std::endl;

	std::cout << "size: " << mstack.size() << std::endl << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << GREENIFY("normal iterator") << std::endl;
	while (it != ite)
	{
		std::cout << "|" << *it << "| ";
		++it;
	}

	std::cout << std::endl << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	std::cout << GREENIFY("reverse iterator") << std::endl;
	while (rit != rite)
	{
		std::cout << "|" << *rit << "| ";
		++rit;
	}
	std::cout << std::endl << std::endl;

	test_list();
	return 0;
}
