/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 00:42:28 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/27 01:08:04 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


void    high_grade()
{
    Bureaucrat B("Kevin", 2);

    try
    {
        std::cout << B << std::endl;
        B.incrementGrade();
        std::cout << B << std::endl;
        B.incrementGrade();
    }
    catch(std::exception &e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }
}

int     main(void)
{
    Bureaucrat test1("Oscar");
    Bureaucrat test2(test1);
    Bureaucrat A = test1;

    A.incrementGrade();
    try
    {
        std::cout << A << std::endl;
        A.decrementGrade();
        std::cout << A << std::endl;
        A.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }
    high_grade();
}