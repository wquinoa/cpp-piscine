/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 20:48:02 by wquinoa           #+#    #+#             */
/*   Updated: 2020/08/09 15:32:11 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_short(Contact contact, int num)
{
	std::string	entry[4] = {std::to_string(num), contact.firstname, contact.lastname,
							contact.nickname};
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
	std::string	tab[11] = { "First name      : ", "Last name       : ", "Nickname        : ", "Login           : ",
							"Postal address  : ", "Email address   : ", "Favorite meal   : ", "Birth date      : ",
							"Underwear color : ", "Darkest secret  : ", "Phone number    : " };
	std::string	entry[11] = { creat.firstname, creat.lastname, creat.nickname,
								creat.login, creat.postal, creat.email, creat.favmeal,
								creat.birthday, creat.undcolor, creat.secret, creat.num };

	std::cout << "\n";
	for (int i = 0; i < 11; i++)
		std::cout << tab[i] << entry[i] << "\n";
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
	if (isdigit(input[0]) && input[1] == '\0')
	{
		i = stoi(input);
		if (i >= 0 && i < 8 && i <= count)
			print_contact(contacts[i - 1]);
		else
			std::cout << "\n\n!!! The selected entry is empty !!!\n";
	}
	else
		std::cout << "\n\n!!! Please use a number ranging from 1 to 8. !!!\n";
	std::cout << "\n";
}

Contact	add_contact()
{
	std::string	tab[11] = { "first name      : ", "last name       : ", "nickname        : ", "login           : ",
							"postal address  : ", "email address   : ", "favorite meal   : ", "birth date      : ",
							"underwear color : ", "darkest secret  : ", "phone number    : " };
	Contact		creat;
	std::string	*entry[11] = { &creat.firstname, &creat.lastname, &creat.nickname,
								&creat.login, &creat.postal, &creat.email, &creat.favmeal,
								&creat.birthday, &creat.undcolor, &creat.secret, &creat.num };

	for (int i = 0; i < 11; i++)
	{
		std::cout << "Enter " << tab[i];
		getline(std::cin, *entry[i]);
	}
	return (creat);
}

int		main(void)
{
	Contact		*contacts;
	std::string	cmd;
	int			i = 0;

	contacts = new Contact[9];
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
	}
	return (0);
}