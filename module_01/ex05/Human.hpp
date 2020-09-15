/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 04:21:01 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/10 04:42:08 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <iostream>
# include <sstream>
# include <memory>

class Human
{
public:
	std::string	identify();
	const Brain	&getBrain();
private:
	const Brain	brain;
};

#endif