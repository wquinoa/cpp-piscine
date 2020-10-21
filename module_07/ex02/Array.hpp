/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 16:23:23 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/21 10:51:17 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <sstream>

//  Write a class template Array that contains elements of type T and that allows the
//  following behavior:
//  • Construction with no parameter: creates an empty array.
//  • Construction with an unsigned int n as a parameter: creates an array 
//	of n elements, initialized by default. 
//	(Tip: try to compile int * a = new int();, then display *a.)
//  • Construction by copy and assignment operator. In both cases, modifying one of
//  the two arrays after copy/assignment won’t affect anything in the other array.
//  • You MUST use the operator new[] for your allocation. You must not do preventive
//  allocation. Your code must never access non allocated memory.
//  • Elements are accessible through the operator[].
//  • When accessing an element with the operator[], if this element is out of the limits,
//  a std::exception is thrown.
//  • A member function size that returns the number of elements in the array. This
//  member function takes no parameter and does not modify the current instance in
//  any way.
//  Wrap your work into an executable that prooves that your class template works as
//  intended.

template <class T>
class Array
{
public:	
	class OutOfRangeException : public std::exception 
	{
	public:
		const char *what() const throw() {
			return ("Array: index out of range");
		}
	};

	Array<T>() {
		_size = 0;
		tab = NULL;
	};

	Array<T>(unsigned int _size_) {
		_size = _size_;
		tab = new T[_size];
		for (unsigned i = 0; i < _size; i++)
			tab[i] = T();
	};

    Array<T>(Array const &copy) {
		_size = copy._size;
		for (unsigned i = 0; i < _size; i++)
		{
			std::cout << "here" << std::endl;

			std::cout << copy.tab[i] << std::endl;
			this->tab[i] = copy.tab[i];
		}
	};

    Array<T>	&operator=(Array<T> const &copy) {
		if (this != &copy)
		{
			_size = copy._size;
			tab = new T[_size];
			for (unsigned i = 0; i < _size; i++)
				tab[i] = copy[i];
		}
		return (*this);
	};

	T			&operator[](unsigned int pos) const {
		if (pos >= _size)
			throw OutOfRangeException();
		return (tab[pos]);
	};

    ~Array<T>() {
		if (tab)
			delete[] tab;
	};

	unsigned	size() const {
		return (_size);
	};

private:
	T			*tab;
	unsigned	_size;
};

#endif