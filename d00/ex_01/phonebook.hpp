/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 01:39:58 by wquinoa           #+#    #+#             */
/*   Updated: 2020/08/08 21:17:35 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP
# include <iostream>
# include <iomanip>

class Contact
{
	public:

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