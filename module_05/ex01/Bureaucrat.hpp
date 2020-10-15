/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 00:02:27 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/15 18:45:47 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"
# define GREENIFY(x) ("\033[32;1m" + x + "\033[0;m")
# define REDIFY(x) ("\033[31;1m" + x + "\033[0;m")

class Form;

class Bureaucrat
{
protected:
	Bureaucrat();
public:
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat(std::string const &name);
	Bureaucrat(std::string const &name, int grade);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &copy);

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

	std::string const			&getName() const;
	unsigned					getGrade() const;

	void						incrementGrade();
	void						decrementGrade();
	void						signForm(Form &) const;


private:
	std::string const			&_name;
	unsigned int				_grade;
};

std::ostream	&operator<<(std::ostream &, const Bureaucrat &);
#endif
