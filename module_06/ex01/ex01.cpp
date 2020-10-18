/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 03:46:22 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/18 12:47:07 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void	*serialize(void)
{
	Data			*data = new Data;
	const char		alphanum[] =
        			"0123456789"
        			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        			"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0 ; i < 8 ; i++)
	{
		data->s1 += alphanum[rand() % sizeof(alphanum)];
		data->s2 += alphanum[rand() % sizeof(alphanum)];
	}
	data->n = rand();

	std::cout << "\nThe serialized data :" << std::endl;
	std::cout << "s1 : " << data->s1 << std::endl;
	std::cout << "n  : " << data->n << std::endl;
	std::cout << "s2 : " << data->s2 << std::endl;

	return (reinterpret_cast<void *>(data));
}

Data	*deserialize(void *void_data)
{
	return (reinterpret_cast<Data *>(void_data));
}

int	main(void)
{
	void	*void_data;
	Data	*data;

	srand(time(0));

	void_data = serialize();
	data = deserialize(void_data);
	std::cout << "\nThe deserialized data :" << std::endl;
	std::cout << "s1 : " << data->s1 << std::endl;
	std::cout << "n  : " << data->n << std::endl;
	std::cout << "s2 : " << data->s2 << std::endl;
	delete data;
	return (0);
}