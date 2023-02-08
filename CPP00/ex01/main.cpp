/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:38:06 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/08 16:35:33 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int	main()
{
	Phonebook	book;
	std::string input;

 std::cout << " _____   _    _   ____   _   _  ______  ____    ____    ____   _  __" << std::endl;
 std::cout << "|  __ \\ | |  | | / __ \\ | \\ | ||  ____||  _ \\  / __ \\  / __ \\ | |/ /" << std::endl;
 std::cout << "| |__) || |__| || |  | ||  \\| || |__   | |_) || |  | || |  | || ' / " << std::endl;
 std::cout << "|  ___/ |  __  || |  | || . ` ||  __|  |  _ < | |  | || |  | ||  <  " << std::endl;
 std::cout << "| |     | |  | || |__| || |\\  || |____ | |_) || |__| || |__| || . \\ " << std::endl;
 std::cout << "|_|     |_|  |_| \\____/ |_| \\_||______||____/  \\____/  \\____/ |_|\\_\\ " << std::endl;
 std::cout << "ENTER YOUR COMMAND $" << std::endl;
 std::getline(std::cin, input);
 for (int x=0; x<(int)input.size(); x++)
	input[x] = std::toupper(input[x]);
	while (input != "EXIT")
	{
		if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		else
			std::cout << "Error : please enter a valid command" << std::endl;
		std::cout << "ENTER YOUR COMMAND $" << std::endl;
		std::getline(std::cin, input);
		for (int x=0; x<(int)input.size(); x++)
			input[x] = std::toupper(input[x]);
	}
	std::cout << "Goodbye, have a great day !" << std::endl;
	return 0;
}