/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:47:37 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 19:18:36 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(int n);
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator= (const Fixed &fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					value;
	static const int	nbits = 8;
};

#endif