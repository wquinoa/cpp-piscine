/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 02:08:50 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/19 02:49:38 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char *ElementNotFoundException::what() const throw()
{
    return ("easyfind: element not found");
}

template <class T>
unsigned   easyfind(T cont, int to_find)
{
    typename T::iterator iter;

    iter = std::find(cont.begin(), cont.end(), to_find);
    if (iter == cont.end())
        throw ElementNotFoundException();
    return (*iter);
}

int main(void)
{
    srand(time(0));

    std::array<int, 1000> arr;
    for (int i = 0; i < 1000; i++)
        arr[i] = (rand() % 1000);
    try
    {
        std::cout << easyfind(arr, 42) << std::endl;
    }
    catch(std::exception &e)
    {
        std:: cout << e.what() << std::endl;
    }    std::vector<int> vec;

    for (int i = 0; i < 1000; i++)
        vec.push_back(rand() % 1000);
    //for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)
        //std::cout << *i << std::endl;
    try
    {
        std::cout << easyfind(vec, 42) << std::endl;
    }
    catch(std::exception &e)
    {
        std:: cout << e.what() << std::endl;
    }
}