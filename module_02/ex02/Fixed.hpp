/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:35:31 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/26 19:58:11 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
# define NBITS 8

class Fixed
{
public:
	Fixed();
	Fixed(int);
	Fixed(float);
	Fixed(const Fixed &copy);
	~Fixed();

	Fixed	&operator=(const Fixed &copy);
	bool	operator> (const Fixed &);
	bool	operator> (const Fixed &) const; // TODO
	bool	operator< (const Fixed &);
	bool	operator< (const Fixed &) const; // TODO
	bool	operator>= (const Fixed &);
	bool	operator<= (const Fixed &);
	bool	operator== (const Fixed &);
	bool	operator!= (const Fixed &);

	Fixed	operator+ (const Fixed &);
	Fixed	operator- (const Fixed &);
	Fixed	operator/ (const Fixed &);
	Fixed	operator* (const Fixed &);

	Fixed	&operator++ ();
	Fixed	&operator-- ();
	Fixed	operator++ (int);
	Fixed	operator-- (int);

	float				toFloat() const;
	int					toInt() const;
	int					getRawBits() const;
	void				setRawBits(const int);

private:
	int					raw_bits;
	static const int	nbits;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &src);
Fixed			&min(Fixed &a, Fixed &b);
Fixed			&max(Fixed &a, Fixed &b);
Fixed const		&min(const Fixed &a, const Fixed &b);
Fixed const		&max(const Fixed &a, const Fixed &b);

#endif
