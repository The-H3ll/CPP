/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:07:52 by molabhai          #+#    #+#             */
/*   Updated: 2021/06/05 18:07:53 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>


char	*string_upper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i += 1;
	}
	return (s);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while (++i < ac)
			std::cout << string_upper(av[i]);
		std::cout << "\n";
	}
	return (0);
}