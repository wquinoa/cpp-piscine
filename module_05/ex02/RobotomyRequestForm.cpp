/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:22:42 by user              #+#    #+#             */
/*   Updated: 2020/10/16 07:37:55 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target) :
Form("Robotomy Request", 72, 45, _target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	*this = RobotomyRequestForm(copy);
	return (*this);
}

void		RobotomyRequestForm::action() const
{
	std::cout << "* skrrrahh! pap-pap ka-ka-ka *" << std::endl;
	std::cout << getTarget(); 

	if (std::rand() % 2)
		std::cout << " lobotomy success!!" << std::endl;
	else
		std::cout << " lobotomy failed..." << std::endl;
	
}