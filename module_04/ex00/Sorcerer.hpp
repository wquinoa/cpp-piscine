/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:08:13 by wquinoa           #+#    #+#             */
/*   Updated: 2020/09/14 22:57:17 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include "Victim.hpp"

class Sorcerer{
public:
	Sorcerer(std::string newName, std::string newTitle);
	~Sorcerer();
	std::string		getName() const;
	std::string		getTitle() const;
	Sorcerer		&operator=(const Sorcerer &sorc);
	void			polymorph(Victim const & victim) const;

private:
	Sorcerer();
	std::string name;
	std::string title;
};

std::ostream	&operator<<(std::ostream &stream, const Sorcerer &sorc);

#endif
