/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:22:42 by user              #+#    #+#             */
/*   Updated: 2020/10/22 14:20:27 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <ctime>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

	void		action() const;
};

#endif
