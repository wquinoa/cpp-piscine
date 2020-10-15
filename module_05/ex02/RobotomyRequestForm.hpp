/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:22:42 by user              #+#    #+#             */
/*   Updated: 2020/10/15 19:22:42 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>

class RobotomyRequestForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

private:
};

#endif
