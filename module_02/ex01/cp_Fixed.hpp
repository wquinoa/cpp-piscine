/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cp_Fixed.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:35:31 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/26 18:31:38 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CP_FIXED_HPP
# define CP_FIXED_HPP
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
	Fixed &operator=(const Fixed &copy);
	float				toFloat() const;
	int					toInt() const;
	int					getRawBits() const;
	void				setRawBits(const int);

private:
	int					raw_bits;
	static const int	nbits;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &src);

#endif
