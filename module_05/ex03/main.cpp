/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 20:28:58 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/17 21:10:41 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
# define BOLDIFY(x) ("\033[1;4m" + (std::string)x + "\033[0;m")

void    oscars_office(Form *form)
{
    Bureaucrat              accountant(BOLDIFY("Oscar"), 30);

    try
    {
        accountant.signForm(*form);
    }
    catch (std::exception &e)
    {
        std::cout << accountant.getName() << " failed to sign form because ";
        std::cout << e.what() << std::endl;
    }
    std::cout << *form;
    try
    {
        accountant.executeForm(*form);
    }
    catch (std::exception &e)
    {
        std::cout << accountant.getName() << " failed to sign form because ";
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}

int     main(void)
{
    Intern      joe("Joe");
    Form        *document;
    std::string	options[4] = { "robotomy reqest", "presidential pardon", "shrubbery creation", "bshd-4" };


    for (int i = 0; i < 4; i++)
    {
        try
        {
            document = joe.makeForm(options[i], "Bill");
            oscars_office(document);
        }
        catch(const std::exception& e)
        {
            std::cout << "Could not create form because " << e.what() << '\n';
        }
        std::cout << std::endl;
    }
    return (0);
}