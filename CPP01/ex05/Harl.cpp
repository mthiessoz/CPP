/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:54:17 by mthiesso          #+#    #+#             */
/*   Updated: 2023/03/12 17:44:13 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{
	
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon (debug)" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. (info)" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. (warning)" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now. (error)" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string	lvl[4] = { "debug", "info", "warning", "error" };
	void (Harl::*ptr_level[4]) (void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	for (int i = 0; i < 4; i++)
		if (lvl[i] == level) 
			(this->*ptr_level[i])();
}