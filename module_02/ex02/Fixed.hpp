/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:35:31 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 21:08:59 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int);
	Fixed(float);
	Fixed(const Fixed &copy);
	~Fixed();

	float				toFloat() const;
	int					toInt() const;
	int					getRawBits() const;
	void				setRawBits(const int);

	Fixed	&operator=(const Fixed &copy);
	bool	operator> (const Fixed &) const;
	bool	operator< (const Fixed &) const;
	bool	operator>= (const Fixed &) const;
	bool	operator<= (const Fixed &) const;
	bool	operator== (const Fixed &) const;
	bool	operator!= (const Fixed &) const;

	Fixed	operator+ (const Fixed &);
	Fixed	operator- (const Fixed &);
	Fixed	operator/ (const Fixed &);
	Fixed	operator* (const Fixed &);

	Fixed	&operator++ ();
	Fixed	&operator-- ();
	Fixed	operator++ (int);
	Fixed	operator-- (int);

private:
	int					raw_bits;
	static const int	nbits = 8;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &src);
Fixed			&min(Fixed &a, Fixed &b);
Fixed			&max(Fixed &a, Fixed &b);
Fixed const		&min(const Fixed &a, const Fixed &b);
Fixed const		&max(const Fixed &a, const Fixed &b);

#endif
