/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:38:42 by wquinoa           #+#    #+#             */
/*   Updated: 2020/10/02 23:49:53 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		ft_error(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

int		sed(std::ifstream &src, std::ofstream &dst, std::string s1, std::string s2)
{
	size_t		found;
	std::string line;

	src >> line;
	while ((found = line.find(s1)) != std::string::npos)
		line.replace(found, s1.length(), s2);
	dst << line;
	if (dst.fail())
	{
		ft_error("Failed to write to file");
		return (1);
	}
	src.close();
	dst.close();
	return (0);
}

int		main(int ac, char **av)
{
	std::ifstream	src;
	std::ofstream	dst;
	std::string		filename;

	if (ac != 4)
		return (ft_error("Wrong number of arguments"));
	if (!av[2][0])
		return (ft_error("Nothing to replace"));
	filename = av[1];
	src.open(filename, std::ifstream::out);
	if (!src)
		return (ft_error("Could not open " + filename));
	dst.open(filename + ".replace", std::ofstream::in | std::ofstream::trunc);
	if (!dst)
	{
		src.close();
		return (ft_error("Could not open " + filename + ".replace"));
	}
	return (sed(src, dst, av[2], av[3]));
}
