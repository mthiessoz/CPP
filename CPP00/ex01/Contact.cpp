/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:09:35 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/10 16:02:48 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void)
{

}

Contact::~Contact(void)
{
	
}

int	Contact::init_data(void)
{
		std::cout << "please enter the first name : " << std::endl;
		std::getline(std::cin, this->_first_name);
		if (this->_first_name.empty())
		{
			std::cout << "Error : you can't let a line empty" << std::endl;
			return -1;
		}
		std::cout << "please enter the last name : " << std::endl;
		std::getline(std::cin, this->_last_name);
		if (this->_last_name.empty())
		{
			std::cout << "Error : you can't let a line empty" << std::endl;
			return -1;
		}
		std::cout << "please enter the nickname : " << std::endl;
		std::getline(std::cin, this->_nickname);
		if (this->_nickname.empty())
		{
			std::cout << "Error : you can't let a line empty" << std::endl;
			return -1;
		}
		std::cout << "please enter the phone number : " << std::endl;
		std::getline(std::cin, this->_phone_number);
		if (this->_phone_number.empty())
		{
			std::cout << "Error : you can't let a line empty" << std::endl;
			return -1;
		}
		std::cout << "please enter a dark secret : " << std::endl;
		std::getline(std::cin, this->_darkest_secret);
		if (this->_darkest_secret.empty())
		{
			std::cout << "Error : you can't let a line empty" << std::endl;
			return -1;
		}
		return 0;
}

void	Contact::column_display(void)
{
	if (this->_first_name.size() > 9)
		std::cout << this->_first_name.substr(0, 9) << ".";
	else 
		std::cout << std::setw(10) << this->_first_name;
	std::cout << "|";
	if (this->_last_name.size() > 9)
		std::cout << this->_last_name.substr(0, 9) << ".";
	else 
		std::cout << std::setw(10) << this->_last_name;
	std::cout << "|";
	if (this->_nickname.size() > 9)
		std::cout << this->_nickname.substr(0, 9) << ".";
	else 
		std::cout << std::setw(10) << this->_nickname;
	std::cout << "|" << std::endl;
}

void	Contact::contact_display(void)
{
	std::cout << "First name : " << this->_first_name << std::endl;
	std::cout << "Last name : " << this->_last_name << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone number : " << this->_phone_number << std::endl;
	std::cout << "Dark secret : " << this->_darkest_secret << std::endl;
}