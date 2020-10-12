/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/12 23:54:44 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
public:
	AMateria();
	AMateria(std::string const &, unsigned);
	virtual AMateria(std::string const &type);
	virtual AMateria(const AMateria &copy);
	virtual ~AMateria();
	virtual AMateria			&operator=(const AMateria &copy);

	std::string const	&getType() const;
	unsigned int		getXP() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &tartget);

private:
	unsigned int		_xp;
	std::string	_type;

};

#endif
