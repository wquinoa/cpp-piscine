/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:37:08 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/09 20:07:14 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <deque>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	
	MutantStack<T>() : std::stack<T>() {};
	MutantStack<T>(const MutantStack &copy) : std::stack<T>(copy) {};
	MutantStack<T> &operator=(const MutantStack<T> &copy) {};
	virtual	~MutantStack<T>() {};

	class iterator : public std::iterator<std::input_iterator_tag, T>
	{
	public:
		iterator(T *p) : it(p) {};

		iterator	&operator++() {
			it--;
			return (*this);
		};
		iterator	&operator--() {
			it++;
			return (*this);
		};
		bool		operator!=(iterator const &cmp) { return (this->it != cmp.it); }; 
		bool		operator==(iterator const &cmp) { return (this->it == cmp.it); }; 
		T			&operator*() { return (*this->it); };
	private:
		T	*it;
	};

	iterator			begin() { return (&this->top()); };
	iterator			end() { return (&this->top() - this->size()); };

	class reverse_iterator : public std::iterator<std::input_iterator_tag, T>
	{
	public:
		reverse_iterator(T *p) : it(p) {};

		reverse_iterator	&operator++() {
			it++;
			return (*this);
		};
		reverse_iterator	&operator--() {
			it--;
			return (*this);
		};
		bool		operator!=(reverse_iterator const &cmp) { return (this->it != cmp.it); }; 
		bool		operator==(reverse_iterator const &cmp) { return (this->it == cmp.it); }; 
		T			&operator*() { return (*this->it); };
	private:
		T	*it;
	};

	reverse_iterator	rbegin() { return (&this->top() - this->size() + 1); };
	reverse_iterator	rend() { return (&this->top() + 1); };
};

#endif
