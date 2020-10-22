/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 01:52:49 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 14:36:55 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <array>

class ElementNotFoundException : public std::exception
{
public:
    const char *what() const throw() {
        return ("easyfind: element not found");
    };
};

template<class T>
int   easyfind(T cont, int to_find) {
    typename T::iterator iter;

    iter = std::find(cont.begin(), cont.end(), to_find);
    if (iter == cont.end())
        throw ElementNotFoundException();
    return (*iter);
};;

#endif