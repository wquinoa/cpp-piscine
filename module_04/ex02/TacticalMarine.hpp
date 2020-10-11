/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 03:59:12 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/10 08:20:51 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	inline TacticalMarine();
	inline TacticalMarine(const TacticalMarine &copy);
	inline ~TacticalMarine();
	inline TacticalMarine &operator=(const TacticalMarine &copy);

	inline TacticalMarine *clone() const;
	inline void			battleCry() const;
	inline void			rangedAttack() const;
	inline void			meleeAttack() const;
};

#endif
