/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:13:15 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 14:31:11 by wquinoa          ###   ########.fr       */
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
T       arrays(T item)
{
    std::cout << item << " ";
    return (item);
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
    char            hello[] = "ifmmp";
    int             goodbye[] = {1, 2, 3, 4, 5};
    float           hey[] = {1.2, 2.3, 3.4, 4.5, 5.6};
    std::string     please[] = { "Give", "me a", "100" };

    iter(hello, 5, function);
    iter(goodbye, 5, function);
    iter(hey, 5, function);
    iter(please, 3, arrays);
}