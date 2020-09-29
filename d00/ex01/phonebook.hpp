/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 01:39:58 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 17:48:37 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP
# include <iostream>
# include <iomanip>
# define REDIFY(x) "\033[1;31m" + std::string(x) + "\033[0m"
# define GREENIFY(x) "\033[1;32m" + std::string(x) + "\033[0m"
# define CURSOR "\033[32m☎️ > \033[0m"

class Contact
{
public:
	Contact(std::string *);
	Contact();
	std::string		get(int);
	void			set(int, std::string);

private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	login;
	std::string	postal;
	std::string	email;
	std::string	favmeal;
	std::string	birthday;
	std::string	undcolor;
	std::string	secret;
	std::string	num;
};


#endif