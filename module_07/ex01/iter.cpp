/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:13:15 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/31 06:31:57 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T> 
T       function(T &item)
{
    return (item - 1);
}

template <class T>
T       arrays(T &item)
{
    return (item);
}

template <class T>
void    iter(T *tab, int len, T f(T &))
{
    for (int i = 0; i < len; i++)
        std::cout << f(tab[i]) << " ";
    std::cout << std::endl; 
}

int main(void)
{
    char            hello[] = "ifmmp";
    int             goodbye[] = {1, 2, 3, 4, 5};
    float           hey[] = {1.2, 2.3, 3.4, 4.5, 5.6};
    std::string     please[] = { "Give", "me a", "100", "right", "now" };

    iter(hello, 5, function);
    iter(goodbye, 5, function);
    iter(hey, 5, function);
    iter(please, 5, arrays);

    return(0);
}