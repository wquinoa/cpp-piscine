/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 19:09:01 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/18 20:45:45 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int>   *a = new Array[5u];
    std::cout << a << std::endl;
    for (int i = 0; i < 5; i++)
    {
        a[i] = i; 
        std::cout << a[i];
    }
    std::cout << std::endl;
    return (0);
}