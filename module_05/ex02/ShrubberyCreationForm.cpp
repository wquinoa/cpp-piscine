/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:21:17 by user              #+#    #+#             */
/*   Updated: 2020/10/15 20:03:34 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : 
Form("Shrubbery Creation", 146, 137, _target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	*this = ShrubberyCreationForm(copy);
	return (*this);
}

void		ShrubberyCreationForm::action()
{
	std::cout << "	        # #### ####" << std::endl;
	std::cout << "      ### \/#|### |/####" << std::endl;
	std::cout << "     ##\/#/ \||/##/_/##/_#" << std::endl;
	std::cout << "   ###  \/###|/ \/ # ###" << std::endl;
	std::cout << " ##_\_#\_\## | #/###_/_####" << std::endl;
	std::cout << "## #### # \ #| /  #### ##/##" << std::endl;
	std::cout << " __#_--###`  |{,###---###-~" << std::endl;
	std::cout << "           \ }{" << std::endl;
	std::cout << "            }}{" << std::endl;
	std::cout << "            }}{" << std::endl;
	std::cout << "       ejm  {{}" << std::endl;
	std::cout << "      , -=-~{ .-^- _" << std::endl;
	std::cout << "            `}" << std::endl;
	std::cout << "             {" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "This ASCII pic can be found at" << std::endl;
	std::cout << "https://asciiart.website/index.php?art=plants/trees" << std::endl;
}
