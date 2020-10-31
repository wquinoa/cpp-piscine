/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 00:42:28 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/27 01:13:15 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
# define UNDERLINE(x) ("\033[4m" + (std::string)x + "\033[0;m")
# define BOLDIFY(x) ("\033[1;4m" + (std::string)x + "\033[0;m")

int     main(void)
{
    Bureaucrat  accountant(BOLDIFY("Oscar"), 25);
    Form        taxes(UNDERLINE("Tax report"), 75);
    Form        revenue(UNDERLINE("Revenue report"), 10);

    std::cout << std::endl << accountant << std::endl << std::endl;
    std::cout << taxes << std::endl;
    accountant.signForm(taxes);
    std::cout << std::endl << taxes << std::endl;
    accountant.signForm(taxes);
    std::cout << std::endl << revenue << std::endl;
    accountant.signForm(revenue);
    std::cout << std::endl;
    for (int i = 0; i < 25; i++)
    {
        try { accountant.incrementGrade(); }
        catch (std::exception &e) { std::cout << e.what() << std::endl; }
    }
    accountant.signForm(revenue);
    std::cout << std::endl;
    std::cout << std::endl << revenue << std::endl;
}