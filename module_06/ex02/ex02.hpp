/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 12:47:33 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/18 13:21:51 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_HPP
# define EX02_HPP
# include <iostream>
# define GREENIFY(x) ("\033[32m" + (std::string)x + "\033[0;m")

class Base
{
public:
    virtual ~Base();
};

class A :public Base {
public:
    virtual ~A();
};
class B :public Base {
public:
    virtual ~B();
};
class C :public Base {
public:
    virtual ~C();
};

#endif
