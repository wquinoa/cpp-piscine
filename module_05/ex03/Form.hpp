/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:32:58 by user              #+#    #+#             */
/*   Updated: 2020/10/17 21:38:09 by wquinoa          ###   ########.fr       */
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
	unsigned	 		getSGrade() const;
	unsigned			getEGrade() const;
	std::string const	getTarget() const;
	bool				isItSigned() const;
	void				beSigned(Bureaucrat const &);
	void				execute(Bureaucrat const & executor) const;
	virtual void		action() const = 0;

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

protected:
	Form(const std::string &, const unsigned, const unsigned, std::string);
	Form();
	const std::string	name;
	const unsigned		signGrade;
	const unsigned		execGrade;
	bool				isSigned;
	std::string			target;
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif
