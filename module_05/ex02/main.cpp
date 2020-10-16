/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 00:42:28 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/16 08:29:47 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# define UNDERLINE(x) ("\033[4m" + (std::string)x + "\033[0;m")
# define BOLDIFY(x) ("\033[1;4m" + (std::string)x + "\033[0;m")

int     main(void)
{
    Bureaucrat              accountant(BOLDIFY("Oscar"), 25);
    ShrubberyCreationForm   form1("Bill");
    RobotomyRequestForm     form2("Bob");
    PresidentialPardonForm  form3("mr. Brown");
    Form                    folder[3] = {form1, form2, form3};


    std::cout << accountant << std::endl << std:: endl;
    for (int i = 0; i < 3; i++)
    {
        try
        {
            accountant.signForm(folder[i]);
        }
        catch (std::exception &e)
        {
            std::cout << accountant.getName() << " failed to sign form because ";
            std::cout << e.what() << std::endl;
        }
        std::cout << folder[i];
        try
        {
            accountant.executeForm(folder[i]);
        }
        catch (std::exception &e)
        {
            std::cout << accountant.getName() << " failed to sign form because ";
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
}