/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 19:58:48 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/26 20:23:06 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(int ac, char **av)
{
	std::string	sentence;
	std::string	*stack;
	std::string token;
	size_t		pos = 0;

	if (ac == 1)
	{
		sentence = av[1];
		while ((pos = sentence.find(" ") != std::string::npos))
		{
			token = sentence.substr(0, pos);
			sentence.erase(0, pos + 1);
		}
		sentence.
	}
}