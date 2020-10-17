/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 12:53:06 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/17 21:18:11 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern(std::string name);
	Intern(const Intern &copy);
	~Intern();
	Intern &operator=(const Intern &copy);

	Form		*makeForm(std::string type, std::string _target);
	std::string	getName() const;

	class NoSuchFormException : public std::exception 
	{
	public:
		const char *what() const throw();
	};


private:
	Intern();
	Form		*getPresi(std::string);
	Form		*getRobo(std::string);
	Form		*getShrub(std::string);
	std::string	name;
};

#endif
