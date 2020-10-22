/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:30:22 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 23:02:28 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <iterator>
# include <array>

class Span
{
public:

	class OutOfRangeException : public std::exception
	{
	public:
		const char *what() const throw() {
			return ("Span: element out of range");
		};
	};

	Span(const Span &);
	Span(unsigned);
	~Span();
	Span		&operator=(const Span &);
	int			&operator[](int);
	const int	&operator[](int) const;
	//const Span	&operator++(int);	//post
	//Span		&operator++();		//pre
	//const Span	&operator--(int);	//post
	//Span		&operator--();		//pre


	void		addNumber(int);
	unsigned	shorestSpan() const;
	unsigned	longestSpan() const;

	class iterator
	{
	private:
		iterator();
		int	*data;

	public:
		iterator(int *arr) : data(arr) {};
		int		&operator*() const;
		const iterator	operator++(int);	//post
		iterator		&operator++();		//pre
		bool			operator==(const iterator & rhs) {
			return !(this != &rhs);
		};
		bool			operator!=(const iterator & rhs){
			return !(this == &rhs);
		};

	};

	iterator	begin() const{
		return (iterator(tab));
	};
	
	iterator	end() const{
		return (iterator(tab + fill));
	};

private:
	Span();
	int			*tab;
	unsigned	fill;
	unsigned	size;
};

#endif