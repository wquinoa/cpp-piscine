/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 16:34:54 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/18 20:44:44 by wquinoa          ###   ########.fr       */
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
    tab = new T[0];
}

template <class T>
Array<T>::Array(unsigned _size_)
{
	_size = _size_;
    tab = new T[_size];
}

template <class T>
Array<T>::Array(Array const &copy) :
tab(copy.tab), _size(copy._size)
{
}

template <class T>
Array<T>::~Array()
{
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
			tab[i] = copy.tab[i];
    }
	return (*this);
}

template <class T>
T			&Array<T>::operator[](unsigned int const pos)
{
	if (pos >= _size)
		throw Array::OutOfRangeException();
	return (tab[pos]);
}

template <class T>
unsigned	Array<T>::size() const
{
	return (this->_size);
}

//template <class T>
//std::ostream	&operator<<(std::ostream &stream, Array<T> const & array)
//{
	//stream << array.size() << std::endl;
	//return (stream);
//}

template <class T>
std::ostream	&operator<<(std::ostream &stream, Array<T> const *array)
{
	stream << array << std::endl;
	return (stream);
}

template class Array<int>;
template class Array<float>;
template class Array<char>;
template class Array<double>;
