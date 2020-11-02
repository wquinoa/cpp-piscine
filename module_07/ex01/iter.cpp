/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:13:15 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/02 21:00:42 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Awesome
{
public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
    o << rhs.get();
    return o; 
}

template< typename T >
void print( T const & x ) 
{
    std::cout << x << std::endl; return; 
}

template <class T> 
void       function(T &item)
{
    std::cout << static_cast<T>(item - 1) << " ";
}

template <class T>
void       arrays(T &item)
{
    std::cout << item << " ";
}

template <class T>
void    iter(T *tab, int len, void f(T const &))
{
    for (int i = 0; i < len; i++)
       f(tab[i]);
}

int main(void)
{
    char            hello[] = "ifmmp";
    int             goodbye[] = { 1, 2, 3, 4, 5 };
    float           hey[] = { 1.2, 2.3, 3.4, 4.5, 5.6 };
    std::string     please[] = { "Give", "me a", "100", "right", "now" };

    int             tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    Awesome         tab2[5];

    iter( tab, 5, print );
    iter( tab2, 5, print );
    std::cout << std::endl;

    iter(hello, 5, function);
    std::cout << std::endl;
    iter(goodbye, 5, function);
    std::cout << std::endl;
    iter(hey, 5, function);
    std::cout << std::endl;
    iter(please, 5, arrays);
    std::cout << std::endl;

    return(0);
}