/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:32:58 by user              #+#    #+#             */
/*   Updated: 2020/10/15 19:05:55 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooLowException::what() const throw()
{
	return ("the signer's grade is too low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("the signer's grade is too high");
}

const char *Form::AlreadySignedException::what() const throw()
{
	return ("the form is already signed");
}

Form::Form() : name("Form"), grade(1)
{
}

Form::~Form()
{
}

Form::Form(const std::string &_name, const unsigned _grade) : name(_name), grade(_grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	isSigned = false;
}

Form::Form(const Form &copy) : name(copy.name), grade(copy.grade), isSigned(copy.isSigned)
{
}

Form	&Form::operator=(const Form &copy)
{
	*this = Form(copy);
	return (*this);
}


std::string	const	&Form::getName() const
{
	return (name);
}

unsigned const		Form::getGrade() const
{
	return (grade);
}

bool const			Form::isItSigned() const
{
	return (isSigned);
}

void				Form::beSigned(Bureaucrat const &someguy)
{
	if (someguy.getGrade() > getGrade())
		throw Form::GradeTooLowException();
	else if (isSigned == true)
		throw Form::AlreadySignedException();
	isSigned = true;
}

std::ostream	&operator<<(std::ostream &stream, const Form &form)
{
	stream << "Form name   : " << form.getName() << ";\n";
	stream << "Form grade  : " << form.getGrade() << ";\n";
	stream << "Form status : " << (form.isItSigned() == true ? GREENIFY("signed") : REDIFY("not signed")) << ";";
	stream << std::endl;
	return (stream);
}