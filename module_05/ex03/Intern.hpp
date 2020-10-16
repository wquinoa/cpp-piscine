/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 12:53:06 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/16 19:46:57 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &copy);
	~Intern();
	Intern &operator=(const Intern &copy);

	//typedef		Form*(*folder_t)(std::string);

	Form 		*getForm(std::string S);
	Form		*makeForm(std::string type, std::string _target);

private:
	Form	*	getPresi(std::string);
	Form	*	getRobo(std::string);
	Form	*	getShrub(std::string);
};

//typedef Form *(*folder_t)(std::string);

#endif
