/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:43:51 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/02 20:50:03 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define GREENIFY(x) ("\033[32m" + (std::string)x + "\033[0;m")

class Awesome {
public:
Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	int  get_n() const { return _n; }
private:
	int _n;
};

std::ostream &operator<< (std::ostream &stream, const Awesome &that)
{
	stream << that.get_n();
	return (stream);
}

template <class T>
void	swap(T &a, T &b)
{
	T	tmp(0);

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T	min(T a, T b)
{
	return (a < b ? a : b);
}

template <class T>
T	max(T a, T b)
{
	return (a > b ? a : b);
}

template <class T>
void    test(T a, T b)
{
    std::cout << std::endl;
	std::cout << "a = " << a << ", b = " << b <<  std::endl;
    //std::cout << GREENIFY("swap") << "(a, b)" << std::endl;
	::swap(a, b);
	//std::cout << "a = " << a << ", b = " << b <<  std::endl;
	std::cout << GREENIFY("min") << "(a, b) = " << ::min(a, b) <<  std::endl;
	std::cout << GREENIFY("max") << "(a, b) = " << ::max(a, b) <<  std::endl;
}

int		main(void)
{
	Awesome a(123);
	Awesome b(321);

	swap(a, b);
	min(a, b);
	max(a, b);
	test(a, b);
    test(3, 2);
    test("chaine1", "chaine2");
    test(4.2, 2.1);
    test('A', 'Z');
    test(0, 0);
    test(4000000000000, 4000000000001);

	return (0);
}