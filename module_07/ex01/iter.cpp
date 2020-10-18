/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:13:15 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/18 14:47:03 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T> 
T       function(T item)
{
    std::cout << static_cast<T>(item - 1) << " ";
    return (item - 1);
}

template <class T>
void    iter(T *tab, int len, T f(T))
{
    for (int i = 0; i < len; i++)
        tab[i] = f(tab[i]);
    std::cout << std::endl;
}


int main(void)
{
    char    hello[] = "ifmmp";
    int     goodbye[] = {1, 2, 3, 4, 5};
    float   hey[] = {1.2, 2.3, 3.4, 4.5, 5.6};

    iter(hello, 5, &function);
    iter(goodbye, 5, function);
    iter(hey, 5, function);
}