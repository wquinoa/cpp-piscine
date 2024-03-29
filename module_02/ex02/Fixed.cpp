/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:35:31 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/10 05:37:16 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Member functions

void			Fixed::setRawBits(const int val)
{
	raw_bits = val;
}

int				Fixed::getRawBits() const
{
	return (raw_bits);
}

int				Fixed::toInt() const
{
	return (raw_bits >> nbits);
}

float			Fixed::toFloat() const
{
	return (raw_bits * 1.0 / (1 << 8));
}

// Constructors

Fixed::Fixed()
{
	raw_bits = 0;
}

Fixed::Fixed(int n)
{
	raw_bits = n << nbits;
}

Fixed::Fixed(float n)
{
	raw_bits = roundf(n * (1 << nbits));
}

Fixed::Fixed(const Fixed &copy)
{
	raw_bits = copy.raw_bits;
}

Fixed::~Fixed()
{

}

// Operators

Fixed			&Fixed::operator=(const Fixed &copy)
{
	raw_bits = copy.raw_bits;
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &src)
{
	stream << src.toFloat();
	return (stream);
}

bool	Fixed::operator> (const Fixed &cmp) const
{
	return (raw_bits > cmp.getRawBits());
}

bool	Fixed::operator< (const Fixed &cmp) const
{
	return (raw_bits < cmp.getRawBits());
}


bool	Fixed::operator>= (const Fixed &cmp) const
{
	return (raw_bits >= cmp.getRawBits());
}

bool	Fixed::operator<= (const Fixed &cmp) const
{
	return (raw_bits <= cmp.getRawBits());
}

bool	Fixed::operator== (const Fixed &cmp) const
{
	return (raw_bits == cmp.getRawBits());
}

bool	Fixed::operator!= (const Fixed &cmp) const
{
	return (raw_bits != cmp.getRawBits());
}

Fixed	Fixed::operator+ (const Fixed &add)
{
	Fixed	sum;

	sum.setRawBits(raw_bits + add.getRawBits());
	return (sum);
}

Fixed	Fixed::operator- (const Fixed &add)
{
	Fixed	sum;

	sum.setRawBits(raw_bits - add.getRawBits());
	return (sum);
}

Fixed	Fixed::operator/ (const Fixed &add)
{
	Fixed	sum;

	sum.setRawBits(raw_bits / add.getRawBits() * (1 << nbits));
	return (sum);
}

Fixed	Fixed::operator* (const Fixed &add)
{
	Fixed	sum;

	sum.setRawBits((raw_bits * 1.0 / (1 << nbits)) * add.getRawBits());
	return (sum);
}

// Increment operators

// post
Fixed	Fixed::operator++ (int)
{
	Fixed before(*this);

	raw_bits++;
	return (before);
}

Fixed	Fixed::operator-- (int)
{
	Fixed before(*this);

	raw_bits--;
	return (before);
}

// pre
Fixed	&Fixed::operator++ (void)
{
	raw_bits++;
	return (*this);
}

Fixed	&Fixed::operator-- (void)
{
	raw_bits--;
	return (*this);
}

// Non member functions

Fixed			&min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}

const Fixed		&min(const Fixed &a, const Fixed &b)
{
	return (a > b ? b : a);
}

Fixed			&max(Fixed &a, Fixed &b)
{
	return (a < b ? b : a);
}

const Fixed		&max(const Fixed &a, const Fixed &b)
{
	return (a < b ? b : a);
}
