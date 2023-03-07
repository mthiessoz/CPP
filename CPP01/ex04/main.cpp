/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:56:08 by mthiesso          #+#    #+#             */
/*   Updated: 2023/03/07 18:03:56 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error : wrong number of argument" << std::endl;
		return -1;
	}

	std::string	input;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string output = (std::string)argv[1] + ".replace";
	std::ifstream	in(argv[1]);
	if (!in.good())
	{
		std::cout << "Error : file not existing" << std::endl;
		return -1;
	}
	std::ofstream	out(output);
	while (std::getline(in, input))
	{
		int f = 0;
		f = input.find(s1, f);
		while (f != (int)std::string::npos)
		{
			input.erase(f, s1.size());
			input.insert(f, s2);
			f = input.find(s1, (f+s1.size()));
		}
		out << input << std::endl;
	}
	in.close();
	out.close();
	return 0;
}