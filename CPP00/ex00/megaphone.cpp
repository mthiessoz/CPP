/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:33:11 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/02 19:39:53 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) 
{
	char	**str = argv;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else
	{
		for (int y=1; y<argc; y++)
		{
			for (int x=0; x<(int)strlen(str[y]); x++)
				str[y][x] = std::toupper(str[y][x]);
			std::cout << str[y];
		}
	}
	std::cout << std::endl;
    return 0;
}