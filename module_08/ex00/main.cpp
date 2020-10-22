/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 02:08:50 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 14:38:41 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int         main(int ac, char **av)
{
    int to_find;

    if (av[1])
        to_find = std::stoi(av[1]);
    else
        to_find = 42;

    (void)ac;
    std::array<int, 1000> arr;
    for (int i = 0; i < 1000; i++)
        arr[i] = i - 500;
    try
    {
        std::cout << easyfind(arr, to_find) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::vector<int> vec;
    for (int i = 0; i < 1000; i++)
        vec.push_back(i - 500);
    try
    {
        std::cout << easyfind(vec, to_find) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}