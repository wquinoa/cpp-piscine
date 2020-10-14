/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:14:38 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/14 21:46:35 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"
# define GREENIFY(x) ("\033[32;1m" + x + "\033[0;m")
# define REDIFY(x) ("\033[31;1m" + x + "\033[0;m")
# define MAX_XP (UINT32_MAX - 10)

class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(std::string const &, unsigned);
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);
	virtual ~AMateria();
	virtual AMateria	&operator=(const AMateria &copy);

	std::string const	&getType() const;
	unsigned int		getXP() const;
	void				setType(std::string);
	void				setXp(unsigned int);
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &tartget);
	void				addExp();

private:
	unsigned int		_xp;
	std::string			_type;

};

#endif
