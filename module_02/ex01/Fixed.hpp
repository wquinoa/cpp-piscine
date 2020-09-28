/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:35:31 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/27 14:56:10 by wquinoa          ###   ########.fr       */
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
	Fixed &operator=(const Fixed &copy);
	float				toFloat() const;
	int					toInt() const;
	int					getRawBits() const;
	void				setRawBits(const int);

private:
	int					raw_bits;
	static const int	nbits = 8;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &src);

#endif
