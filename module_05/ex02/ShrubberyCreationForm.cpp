/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:21:17 by user              #+#    #+#             */
/*   Updated: 2020/10/16 08:14:48 by wquinoa          ###   ########.fr       */
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
	std::ofstream	file;
	std::string		filename = getTarget() + "_shrubbbery";

	file.open(filename, std::ios::out | std::ios::trunc);
	if (file.is_open() == false)
	{
		std::cout << "Couldn't open " << filename << std::endl;
		return ;
	}
	file << "	        # #### ####" << std::endl;
	file << "      ### \\/#|### |/####" << std::endl;
	file << "     ##\\/#/ \\||/##/_/##/_#" << std::endl;
	file << "   ###  \\/###|/ \\/ # ###" << std::endl;
	file << " ##_\\_#\\_\\## | #/###_/_####" << std::endl;
	file << "## #### # \\ #| /  #### ##/##" << std::endl;
	file << " __#_--###`  |{,###---###-~" << std::endl;
	file << "           \\ }{" << std::endl;
	file << "            }}{" << std::endl;
	file << "            }}{" << std::endl;
	file << "       ejm  {{}" << std::endl;
	file << "      , -=-~{ .-^- _" << std::endl;
	file << "            `}" << std::endl;
	file << "             {" << std::endl;
	file << "" << std::endl;
	file << "------------------------------------------------" << std::endl;
	file << "This ASCII pic can be found at" << std::endl;
	file << "https://asciiart.website/index.php?art=plants/trees" << std::endl;

	file.close();
}
