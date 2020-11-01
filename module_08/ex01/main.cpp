/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:09:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/01 12:54:18 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#define GREENIFY(x) ("\033[32;2m" + (std::string)x + "\033[0m")
#define GREEN "\033[32;2m"
#define X "\033[0m"
#define REDIFY(x) ("\033[33;2m" + (std::string)x + "\033[0m")
#define GREY(x) ("\033[30;1m" + (std::string)x + "\033[0m")

void test_span(Span & sp)
{ 

    try { std::cout << "Longest  span  : " << GREEN << sp.longestSpan() << X << std::endl; }
    catch(const std::exception& e) { std::cerr << REDIFY(e.what()) << '\n'; }

    try { std::cout << "Shortest span  : " << GREEN << sp.shortestSpan() << X << std::endl; }
    catch(const std::exception& e) { std::cerr << REDIFY(e.what()) << '\n'; }

    try 
    {
        std::cout << "Add number 1   : ";
        sp.addNumber(1);
        std::cout <<"success. ";
        std::cout << "new shortest span : " << GREEN << sp.shortestSpan() << X << std::endl;
    }
    catch(const std::exception& e) { std::cerr << REDIFY(e.what()) << '\n'; }

}

void create_span(t_test *example)
{
    Span sp = Span(example->size);
    
    std::cout << GREY(example->type) << std::endl;
    try
    {
        std::cout << "Span           : " << GREEN;
        sp.fill(example->first, example->last, example->step);
        if (sp.size() <= 50)
            sp.dump();
        else
            std::cout << example->size << " capacity" << "\n";
        std::cout << X;
        sp.print_limits();
    }
    catch(const std::exception& e)
    {
        std::cerr << REDIFY(e.what()) << '\n';
    }
    
    test_span(sp);
}

int main(void)
{
    t_test cases[] = {
        { -12, 12, 3, 10, "Basic" },
        { -2, -1 , 1, 2 , "Basic"},
        { INT32_MIN, INT32_MIN, 1, 1, "Tiny size" },
        { -2000000000, 2000000000, 1000000 , 20000 , "Big numbers" },
        { -1873838, 3129848, 1, 5003688, "5 mil elements" },
        { 1342, 324, 43, 2389749, "Member functions error checking" }
    };

    for (int i = 0; i < 6; i++)
    {
        create_span(cases + i);
        std::cout << std::endl;
    }
    return (0);
}