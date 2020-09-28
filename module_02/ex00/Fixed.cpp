/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:50:00 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 20:23:54 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(int n)
{
    std::cout << "Integer constructor called" << std::endl;
    value = n;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) // : value(copy.value)
{
    std::cout << "Copy constructor called" << std::endl;
    value = copy.getRawBits();
}

Fixed   &Fixed::operator= (const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;

    value = fixed.getRawBits();
    return (*this);
}

int		Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}