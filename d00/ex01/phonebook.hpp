/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 01:39:58 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 17:16:28 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP
# include <iostream>
# include <iomanip>

class Contact
{
public:
	Contact(std::string *);
	//~Contact();
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