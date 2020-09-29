/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 20:48:02 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 17:25:45 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

const std::string	tab[11] = { "first name      : ", "last name       : ", "nickname        : ", \
								"login           : ", "postal address  : ", "email address   : ", \
								"favorite meal   : ", "birth date      : ", "underwear color : ", \
								"darkest secret  : ", "phone number    : " };

Contact::Contact()
{
}

Contact::Contact(std::string *entries)
{
	for (int i = 0; i < 11; i++)
		set(i, entries[i]);
}

std::string Contact::get(int position)
{
	std::string	to_get[11] = {firstname, lastname, nickname, login,
								postal, email, favmeal, birthday,
								undcolor, secret, num};

	return (to_get[position]);
}

void		Contact::set(int position, std::string arg)
{
	std::string	*to_set[11] = {&firstname, &lastname, &nickname, &login,
								&postal, &email, &favmeal, &birthday,
								&undcolor, &secret, &num};

	*to_set[position] = arg;
}

void	print_short(Contact contact, int num)
{
	std::string	entry[4] = {std::to_string(num), contact.get(0), contact.get(1),
							contact.get(2)};
	std::string	str;

	for (int i = 0; i < 4; i++)
	{
		if (entry[i].length() > 10)
			str = entry[i].substr(0, 9) + ".";
		else
			str = entry[i];
		std::cout << "|" << std::setw(10) << str;
	}
	std::cout << "|\n";
}

void		print_contact(Contact creat)
{
	std::string	entry[11];

	for (int i = 0; i < 11; i++)
		entry[i] = creat.get(i);
	std::cout << "\n";
	for (int i = 0; i < 11; i++)
	{
		std::cout << (char)std::toupper(tab[i][0]);
		std::cout << &tab[i][1] << entry[i] << std::endl;
	}
}

void		search_contact(Contact *contacts, int count)
{
	int			i;
	std::string	input;

	if (count == 0)
	{
		std::cout << "\n\nThe phonebook is empty\n\n";
		return ;
	}
	std::cout << "---------------------------------------------\n";
	for (i = 0 ; i < count ; i++)
		print_short(contacts[i], i + 1);
	std::cout << "---------------------------------------------\n\n";
	std::cout << "Select an entry\n";
	getline(std::cin, input);
	if (isdigit(input[0]) && input[1] == '\0' && input[0] != '0' && input[i] != '9')
	{
		i = stoi(input);
		if (i >= 1 && i < 8 && i <= count)
			print_contact(contacts[i - 1]);
		else
			std::cout << REDIFY("\n\nERROR: ") << "The selected entry is empty\n";
	}
	else
		std::cout << REDIFY("\n\nERROR: ") << "Please use a number ranging from 1 to 8.\n";
	std::cout << "\n";
}

Contact	add_contact()
{
	Contact		creat;
	std::string	entry[11];

	for (int i = 0; i < 11; i++)
	{
		std::cout << "Enter " << tab[i];
		getline(std::cin, entry[i]);
	}
	creat = Contact(entry);
	return (creat);
}

int		main(void)
{
	Contact		contacts[9];
	std::string	cmd;
	int			i = 0;

	std::cout << "The crappy phonebook.\nUsage: " << GREENIFY("ADD SEARCH EXIT\n");
	while (getline(std::cin, cmd))
	{
		if (cmd == "ADD")
		{
			contacts[i] = add_contact();
			i++;
		}
		if (cmd == "SEARCH")
			search_contact(contacts, i);
		if (cmd == "EXIT")
			exit (0);
		std::cout << CURSOR;
	}
	return (0);
}