/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:30:22 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/01 12:29:11 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <iterator>
# include <vector>
# include <algorithm>

typedef struct s_test
{
	int first;
	int last;
	int step;
	int size;
	std::string type;
}				t_test;

class Span
{
public:
	typedef std::vector<int>::iterator			iterator;
	typedef std::vector<int>::const_iterator	const_iterator;

	class SpanMaxSizeException : public std::exception
	{
	public:
		const char *what() const throw() {
			return ("maximum capacity reached");
		};
	};

	class SpanMinSizeException : public std::exception
	{
	public:
		const char *what() const throw() {
			return ("span too small");
		};
	};

	class IntegerOverflowException : public std::exception
	{
	public:
		const char *what() const throw() {
			return ("fill: integer overflow");
		};
	};

	class InvalidInputException : public std::exception
	{
	public:
		const char *what() const throw() {
			return ("fill: invalid input parameters");
		};
	};

	Span		&operator=(const Span &);
	Span(const Span &);
	Span(t_test *test);
	Span(unsigned);
	~Span();

	void		addNumber(int);
	void		fill(int, int);
	void		fill(int, int, unsigned );
	unsigned	shortestSpan() const;
	unsigned	longestSpan() const;
	void		dump() const;
	void		print_limits() const;
	unsigned	size() const;

private:
	Span();
	std::vector<int>	tab;
	unsigned			max_size;
};

#endif