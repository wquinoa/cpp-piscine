/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:37:08 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/09 20:06:12 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

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
	std::cout << "top: " << *mstack.begin() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "|" << *it << "| ";
		++it;
	}
	std::cout << std::endl << std::endl;
	std::list<int>::reverse_iterator rit = mstack.rbegin();
	std::list<int>::reverse_iterator rite = mstack.rend();
	int i = -1;
	while (rit != rite)
	{
		std::cout << ":" << *rit << ": ";
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
	std::cout << "top     : " << mstack.top() << std::endl;
	MutantStack<int> coppppy(mstack);
	std::cout << "copy top: " << coppppy.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "|" << *it << "| ";
		++it;
	}

	std::cout << std::endl << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	int i = -1;
	while (rit != rite)
	{
		std::cout << ":" << *rit << ": ";
		++rit;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);	

	test_list();
	return 0;
}
