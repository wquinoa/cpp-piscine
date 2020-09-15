/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 03:47:25 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 03:51:26 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *ptr = &brain;
	std::string &ref = brain;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return(0);
}