/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 00:33:45 by wquinoa           #+#    #+#             */
/*   Updated: 2020/08/23 23:52:01 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	fn(char &c)
{
	std::cout << char(std::toupper(c));
}

int		main(int ac, char **av)
{
	std::string	data;
	int			i;

	i = 0;
	while (av[++i])
	{
		data = av[i];
		std::for_each(data.begin(), data.end(), fn);
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}