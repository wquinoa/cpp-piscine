/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:22:42 by user              #+#    #+#             */
/*   Updated: 2020/10/16 07:31:24 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

	void		action() const;
};

#endif
