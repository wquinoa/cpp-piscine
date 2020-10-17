/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 20:58:25 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/17 21:11:56 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# define BOLDIFY(x) ("\033[1;4m" + (std::string)x + "\033[0;m")

int     main(void)
{
    Bureaucrat              accountant(BOLDIFY("Oscar"), 25);
    ShrubberyCreationForm   form1("Bill");
    RobotomyRequestForm     form2("Bob");
    PresidentialPardonForm  form3("mr. Brown");
    Form                    *folder[3] = {&form1, &form2, &form3};

    std::cout << accountant << std::endl << std:: endl;
    for (int i = 0; i < 3; i++)
    {
        try
        {
            accountant.signForm(*folder[i]);
        }
        catch (std::exception &e)
        {
            std::cout << accountant.getName() << " failed to sign form because ";
            std::cout << e.what() << std::endl;
        }
        std::cout << *folder[i];
        try
        {
            accountant.executeForm(*folder[i]);
        }
        catch (std::exception &e)
        {
            std::cout << accountant.getName() << " failed to sign form because ";
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
}