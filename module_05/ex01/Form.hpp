/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:32:58 by user              #+#    #+#             */
/*   Updated: 2020/10/17 21:54:49 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(const std::string &, const unsigned);
	Form(const Form &copy);
	~Form();
	Form &operator=(const Form &copy);

	std::string	const	&getName() const;
	unsigned			getGrade() const;
	bool				isItSigned() const;
	void				beSigned(Bureaucrat const &);

	class GradeTooLowException : public std::exception 
	{
	public:
		const char *what() const throw();
	};

	class GradeTooHighException : public std::exception 
	{
	public:
		const char *what() const throw();
	};

	class AlreadySignedException : public std::exception 
	{
	public:
		const char *what() const throw();
	};

private:
	Form();
	const std::string	name;
	const unsigned		grade;
	bool				isSigned;
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif
