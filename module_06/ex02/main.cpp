/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:27:32 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 14:23:29 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.hpp"

bool    identify_a(Base *p)
{
	return (dynamic_cast<A *>(p) != NULL);
}

bool    identify_b(Base *p)
{
	return (dynamic_cast<B *>(p) != NULL);
}

bool    identify_c(Base *p)
{
	return (dynamic_cast<C *>(p) != NULL);
}

bool            (*identifiers[3])(Base *) = { identify_a, identify_b, identify_c };
const char      *answers[3] = { " class A", " class B", " class C" };

Base	*generate(void)
{
	int		r = rand() % 3;
	Base	*ptr;

	if (r == 0)
		ptr = new A;
	else if (r == 1)
		ptr = new B;
	else
		ptr = new C;
	return (ptr);
}


void	identify_from_pointer(Base *p)
{
    std::cout << "This is";
    for (int i = 0; i < 3; i++)
    {
        if (identifiers[i](p) == true)
        {
            std::cout << GREENIFY(answers[i]) << " ( pointer )" << std::endl;
            return ;
        }
    }
    std::cout << " not a derived class" << std::endl;
}

void	identify_from_reference(Base &p)
{
    std::cout << "This is";
    for (int i = 0; i < 3; i++)
    {
        if (identifiers[i](&p) == true)
        {
            std::cout << GREENIFY(answers[i]) << " (reference)" << std::endl;
            return ;
        }
    }
    std::cout << " not a derived class" << std::endl;
}

int     main()
{
	Base	*base;

	srand(time(0));

    for (int i = 0; i < 6; i++)
    {
        base = dynamic_cast<Base *>(generate());
        identify_from_pointer(base);
        identify_from_reference(*base);
        delete base;
    }
    base = new Base;
    identify_from_pointer(base);
    identify_from_reference(*base);
    delete base;

	return (0);
}