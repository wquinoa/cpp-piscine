/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 16:23:23 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/21 11:20:00 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <sstream>

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