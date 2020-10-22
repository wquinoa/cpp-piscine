/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:30:22 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/21 12:55:53 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>

class Span
{
public:
	Span(const Span &);
	Span(unsigned);
	~Span();
	Span		&operator=(const Span &);

	void		addNumber(int);
	unsigned	shorestSpan() const;
	unsigned	longestSpan() const;

private:
	Span();
	int			*tab;
	unsigned	fill;
	unsigned	size;
};

#endif