/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:35:31 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/04 15:27:51 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void			Fixed::setRawBits(const int val)
{
	std::cout << "setRawBits member function called" << std::endl;
	raw_bits = val;
}

int				Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (raw_bits);
}

int				Fixed::toInt(void) const
{
	return (raw_bits >> nbits);
}

float			Fixed::toFloat(void) const
{
	return (raw_bits * 1.0 / (1 << nbits));
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	raw_bits = 0;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	raw_bits = n << nbits;
}

Fixed::Fixed(float n)
{
	std::cout << "Float constructor called" << std::endl;
	raw_bits = roundf(n * (1 << nbits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	raw_bits = copy.raw_bits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed			&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	raw_bits = copy.raw_bits;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &src)
{
	stream << src.toFloat();
	return (stream);
}
