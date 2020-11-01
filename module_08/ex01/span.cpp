/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:30:17 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/01 12:51:07 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned amount) : max_size(amount)
{
}

Span::Span(t_test *test)
{
	long	size = test->last - test->first;

	if (size < 0)
		throw SpanMinSizeException();
	max_size = size;
	fill(test->first, test->last, test->step);
}

Span::Span(const Span & copy) : tab(copy.tab), max_size(copy.max_size)
{
}

Span		&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		max_size = copy.max_size;
		tab = copy.tab;
	}
	return (*this);
}

Span::~Span()
{
}

void		Span::addNumber(int n)
{
	if (tab.size() == max_size)
		throw SpanMaxSizeException();
	tab.push_back(n);
}

void		Span::fill(int smallest, int largest)
{
	fill(smallest, largest, 1);
}

void		Span::fill(int smallest, int largest, unsigned int step)
{
	int				limit = INT32_MAX - step;
	unsigned long	diff;
	unsigned long	capacity;
	int				number;

	if (largest < smallest || !step)
		throw InvalidInputException();
	if (tab.size() == max_size)
		throw SpanMaxSizeException();

	diff = (largest - smallest) / step; 
	capacity = max_size - tab.size();
	if (diff > capacity)
		throw SpanMinSizeException();

	number = smallest;
	while (number <= largest)
	{
		if (number > limit || step > INT32_MAX)
		{
			tab.clear();
			throw IntegerOverflowException();
		}
		addNumber(number);
		number += step;
	}
}

unsigned	Span::longestSpan() const
{
	if (tab.size() < 2)
		throw SpanMinSizeException();

	long min = *std::min_element(tab.begin(), tab.end());
	long max = *std::max_element(tab.begin(), tab.end());
	long diff = abs(max - min);

	return (diff);
}

unsigned	Span::shortestSpan() const
{
	unsigned			diff;
	unsigned			shortest_span;
	std::vector<int>	copy;

	if (tab.size() < 2)
		throw SpanMinSizeException();
	copy = tab;
	shortest_span = UINT32_MAX;
	std::sort(copy.begin(), copy.end());
	for (iterator it = copy.begin(); it < copy.end(); it++)
	{
		diff = abs(*it - *(it + 1));
		shortest_span = diff < shortest_span ? diff : shortest_span;
	}
	return (shortest_span);
}

void		Span::dump() const
{
	if (tab.size())
	{
		std::cout << "{ ";
		for (const_iterator it = tab.begin(); it != tab.end(); it++)
		{
			std::cout << *it;
			if (it + 1 != tab.end())
				std::cout << ",";
			std::cout << " ";
		}
		std::cout << "};  " << tab.size() << "/" << max_size << " capacity" << std::endl;
	}
}

void		Span::print_limits() const
{
	if (tab.size())
	{
		std::cout << "Begin          : " << *tab.begin() << std::endl;
		std::cout << "End            : " << *(tab.end() - 1) << std::endl;
	}
	else
		throw SpanMinSizeException();
}

unsigned	Span::size() const
{
	return (tab.size());
}