/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:09:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 22:44:41 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
    Span sp = Span(5);

    srand(time(0));
    
    for (Span::iterator it = sp.begin() ; it != sp.end(); ++it)
    {
        *it = rand();
        std::cout << *it << " ";
    }
}