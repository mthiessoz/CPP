/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:25 by mthiesso          #+#    #+#             */
/*   Updated: 2023/03/01 00:10:52 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_Type = type;
}

Weapon::Weapon(void)
{

}

Weapon::~Weapon(void)
{

}

std::string	Weapon::getType(void)
{
	return this->_Type;
}

void	Weapon::setType(std::string type)
{
	this->_Type = type;
}