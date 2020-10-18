/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 22:01:50 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/18 03:40:02 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#define PRINT(x) (std::cout << x << std::endl)

bool	test_char(char* arg)
{
	char*	test;
    long c = strtol(arg, &test, 10);

	if (!*test && c >= INT8_MIN && c <= INT8_MAX)
	{
		if (std::isprint(c))
			std::cout << "'" << (char)(c) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		return (true);
	}
    return (false);
}

bool	test_int(char* arg)
{
	char*	test;
	long	value = strtol(arg, &test, 10);

	if (*test && *test != '.')
		return (false);
	if (value >= INT32_MAX || value <= (long)INT32_MIN)
		return (false);
	std::cout << (int)value << std::endl;
	return (true);
}

bool	test_float(char* arg)
{
	char	*test;
	double	value = strtod(arg, &test);

	if (*test)
	{
		if (*test != 'f' || *(test + 1))
			return (false);
	}
	if (std::isnan(value))
	{
		std::cout << "nanf" << std::endl;
		return (true);
	}
	std::cout << arg;
	if (!strchr(arg, '.'))
		std::cout << ".0";
	std::cout << "f" << std::endl;
	return (true);
}

bool	test_double(char* arg)
{
	char		*test = 0;
	long double	value = strtold(arg, &test);

	if (*test)
	{
		if (*test != 'f' || *(test + 1))
			return (false);
	}
	if (std::isnan(value))
	{
		std::cout << "nan" << std::endl;
		return (true);
	}
	std::cout << arg;
	if (!strchr(arg, '.'))
		std::cout << ".0" << std::endl;
	std::cout << std::endl;
	return (true);
}

void	route(char *arg)
{
    bool		(*tests[4])(char*) = { &test_char, &test_int, &test_float, &test_double };
	std::string	tab[4] = { "char:   ", "int:    ", "float:  ", "double: " };

	for (int i = 0; i < 4; i++)
	{
		std::cout << tab[i];
		if (tests[i](arg) == false)
			std::cout << "impossible" << std::endl;
	}
}

int     main(int ac, char ** av)
{
    if (ac != 2)
    {
        std::cout << "Error: only one arg required" << std::endl;
        return (1);
    }
    route(av[1]);
    return (0);
}
