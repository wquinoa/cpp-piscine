/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 16:34:54 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/19 00:58:16 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
	return ("Array: index out of range");
}

template <class T>
Array<T>::Array()
{
 	_size = 0;
    tab = NULL;
}

template <class T>
Array<T>::Array(unsigned _size_)
{
	_size = _size_;
    tab = new T[_size];
	for (unsigned i = 0; i < _size; i++)
		tab[i] = T();
}

template <class T>
Array<T>::Array(Array const &copy)
{
	_size = copy._size;
	for (unsigned i = 0; i < _size; i++)
	{
		std::cout << "here" << std::endl;

		std::cout << copy.tab[i] << std::endl;
		this->tab[i] = copy.tab[i];
	}
}

template <class T>
Array<T>::~Array()
{
	if (tab)
		delete[] tab;
}

template <class T>
Array<T>	&Array<T>::operator=(Array<T> const &copy)
{
    if (this != &copy)
    {
		_size = copy._size;
		tab = new T[_size];
		for (unsigned i = 0; i < _size; i++)
			tab[i] = copy[i];
    }
	return (*this);
}

template <class T>
T			&Array<T>::operator[](unsigned int const pos) const
{
	if (pos >= _size)
		throw Array::OutOfRangeException();
	return (tab[pos]);
}

template <class T>
unsigned	Array<T>::size() const
{
	return (_size);
}

template class Array<int>;
template class Array<float>;
template class Array<char>;
template class Array<double>;
template class Array<std::string>;
