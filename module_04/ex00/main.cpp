/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 22:30:40 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 12:21:53 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
# define GREENIFY(x) ("\033[32;1m" + (std::string)x + "\033[0m")
# define REDIFY(x) ("\033[31;1m" + (std::string)x + "\033[0m")

int my_tests()
{
	Sorcerer victor(GREENIFY("Victor"), "The Victorious");
	Sorcerer vitya(victor);
	Sorcerer test = vitya;

	std::cout << std::endl;
	std::cout << test << std::endl;
	
	Peon	robert(REDIFY("Bob"));
	Peon	bob(robert);
	Peon	test1 = bob;

	std::cout << std::endl;
	std::cout << test1 << std::endl;
	test.polymorph(test1);
	std::cout << std::endl;

	return (0);
}

int subject_tests()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}

int	main()
{
	subject_tests();
	std::cout << "\nPress enter to continue" << std::endl;
	std::getchar();
	my_tests();
	return (0);
}