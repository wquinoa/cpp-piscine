/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/22 13:00:31 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

void	materia_test()
{
	MateriaSource *source = new MateriaSource;
	Character*	zaz = new Character("zaz");
	ICharacter*	bob = new Character("bob");
	AMateria	*materia, *tmp;

	for (int i = 0; i <= 5; i++)
	{
		if (i % 2 == 0)
			materia = new Ice("ice");
		else
			materia = new Cure("cure");
		source->learnMateria(materia);
		if (i < 0 || i > 3)
			delete materia;
	}		

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			materia = source->createMateria("ice");
		else
			materia = source->createMateria("cure");
		zaz->equip(materia);
		if (i < 0 || i > 3)
			delete materia;
	}
	for (int i = -1; i < 5; i++)
	{
		std::cout << "slot number " << i << ": ";
		zaz->use(i, *bob);
	}
	zaz->use(3, *bob);
	tmp = zaz->returnMateria(3); // need it to prevent leaks
	zaz->unequip(3);
	zaz->unequip(3);
	delete tmp;
	delete bob;
	delete zaz;
	delete source;
}

int		main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* zaz = new Character("zaz");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);

	ICharacter* bob = new Character("bob");

	zaz->use(0, *bob);
	zaz->use(1, *bob);

	delete bob;
	delete zaz;
	delete src;

	std::cout << "\nPress enter to run my tests" << std::endl;
	std::getchar();
	materia_test();

	std::cout << "Press any key after running leak checks" << std::endl;
	std::getchar();
	return 0;
}
