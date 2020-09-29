/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 04:21:01 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/29 20:41:05 by wquinoa          ###   ########.fr       */
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
	Human();
	std::string	identify();
	const Brain	&getBrain();
private:
	const Brain myBrain;
};

#endif