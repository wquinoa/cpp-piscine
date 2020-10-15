/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:32:58 by user              #+#    #+#             */
/*   Updated: 2020/10/15 19:50:54 by wquinoa          ###   ########.fr       */
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

Form::~Form()
{
}

Form::Form(const std::string &_name, const unsigned sgrade, const unsigned egrade, std::string _target) :
name(_name), signGrade(sgrade), execGrade(egrade), target(_target)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (execGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	isSigned = false;
}

Form::Form(const Form &copy) :
name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade), isSigned(copy.isSigned)
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

unsigned const		Form::getSGrade() const
{
	return (signGrade);
}

unsigned const		Form::getSGrade() const
{
	return (execGrade);
}

bool const			Form::isItSigned() const
{
	return (isSigned);
}

void				Form::beSigned(Bureaucrat const &someguy)
{
	if (someguy.getGrade() > getSGrade())
		throw Form::GradeTooLowException();
	else if (isSigned == true)
		throw Form::AlreadySignedException();
	isSigned = true;
}

std::ostream	&operator<<(std::ostream &stream, const Form &form)
{
	stream << "Form name   : " << form.getName() << ";\n";
	stream << "Sign grade  : " << form.getSGrade() << ";\n";
	stream << "Exec grade  : " << form.getEGrade() << ";\n";
	stream << "Form signed : " << (form.isItSigned() == true ? GREENIFY("yes") : REDIFY("no")) << ";";
	stream << std::endl;
	return (stream);
}