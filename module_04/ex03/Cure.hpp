/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 19:17:22 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const std::string &);
	Cure(const Cure &copy);
	~Cure();
	Cure &operator=(const Cure &copy);

	Cure	*clone() const;
	void	use(ICharacter &);
};

#endif
