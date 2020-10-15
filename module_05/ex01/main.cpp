/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 00:42:28 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/15 18:46:29 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat  accountant("Oscar", 25);
    Form        taxes("Tax report", 150);
    Form        revenue("Revenue report", 10);

    accountant.signForm(taxes);
    accountant.signForm(revenue);
}