/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/25 16:01:33 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
public:
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);
	~AMateria();
	AMateria			&operator=(const AMateria &copy);

	std::string const	&getType() const;
	unsigned int		getXP() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &tartget);

private:
	AMateria();
	unsigned int		xp_;
	std::string			type_;
};

#endif
