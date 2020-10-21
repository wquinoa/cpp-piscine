/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 19:09:01 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/21 11:27:11 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
# define GREENIFY(x) ("\033[32;2m" + x + "\033[0;m")
# define REDIFY(x) ("\033[31;2m" + (std::string)x + "\033[0;m")
# define ASIZE 256

const char		alphanum[] =
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
static double   randomValues[ASIZE];


template <class T>
void    printer(Array<T> &tab, std::string name)
{
    if (tab.size() > 0)
    {
        std::cout << name << " = { ";
        for (unsigned i = 0; i < tab.size() - 1; i++)
            std::cout << "\033[32;2m" << tab[i] << "\033[0m, ";
        std::cout << "\033[32;2m" << tab[tab.size() - 1] << "\033[0;m }" << std::endl;
    }
    else
        std::cout << REDIFY("{ NULL }") << std::endl;
}

template <class T>
void    fill_tab(Array<T> &tab)
{
    for (unsigned i = 0; i < tab.size(); i++)
        tab[i] = randomValues[i];
}

int     main()
{   
    srand(time(0));
    for (int i = 0; i < ASIZE; i++)
        randomValues[i] = (rand() % 32 + 65) + (rand() % 127) / 100000.0;

    Array<int> a(ASIZE);
    fill_tab(a);
    printer(a, "\nint\na");

    Array<float> b(ASIZE);
    fill_tab(b);
    printer(b, "\nfloat\nb");
    
    Array<char> c(ASIZE);
    fill_tab(c);
    printer(c, "\nchar\nc");

    Array<double> d(ASIZE);
    fill_tab(d);
    printer(d, "\ndouble\nd");

    Array<short> f(ASIZE);
    fill_tab(f);
    printer(f, "\nshort\nf");

    Array<std::string> e(ASIZE);
    for (unsigned i = 0; i < e.size(); i++)
    {
        for (int j = 0; j < ASIZE; j++)
            e[i] += alphanum[rand() % sizeof(alphanum)];
    }
    printer(e, "\nstring\ne");
    try
    {
        std::cout << e[-1] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\ne[-1]" << std::endl;
        std::cout << "exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << e[ASIZE + 1] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\ne[" << ASIZE << " + 1]" << std::endl;
        std::cout << "exception: " << e.what() << std::endl;
    }
    return (0);
}