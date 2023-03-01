/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:15:33 by mthiesso          #+#    #+#             */
/*   Updated: 2023/03/01 13:48:58 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void)
{
	this->nb_contact = 0;
	return; 
}

Phonebook::~Phonebook(void)
{
	return;
}

void	Phonebook::add(void)
{
	if (this->_tab[this->nb_contact % 8].init_data() == 0)
		this->nb_contact++;
	return;
}

void	Phonebook::search(void)
{
	if (this->nb_contact == 0)
		std::cout << "please add a contact before searching" << std::endl;
	else
	{
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		for(int x=0; x<this->nb_contact && x<8; x++)
		{
			std::cout << "|" << std::setw(10) << (x + 1) << "|";
			this->_tab[x].column_display();
			std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		}
		std::cout << "Enter the index you want to display" << std::endl;
		std::string input;
		int n;
		std::getline(std::cin, input);
		if (input.length() == 1)
		{
			n = std::atoi(input.c_str());
			if (n > 0 && n <= std::min(this->nb_contact, 8))
				this->_tab[n - 1].contact_display();
			else
				std::cout << "please enter an existing index" << std::endl;
		}
		else
			std::cout << "Please enter an existing index" << std::endl;
	}
	return;
}
