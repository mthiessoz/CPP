/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:25 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/24 18:38:38 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_Type = type;
}

Weapon::~Weapon(void)
{

}

std::string	Weapon::getType(void)
{
	return this->_Type;
}

Weapon::void	setType(std::string type)
{
	this->_Type = type;
}