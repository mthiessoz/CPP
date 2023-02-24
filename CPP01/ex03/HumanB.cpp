/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:04 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/24 18:54:47 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp

HumanB::HumanB(std::string	name)
{
	this->_Name = name;
}

HumanB::~HumanB(void)
{

}

HumanB::void	attack(void)
{
	
}

HumanB::void	setWeapon(Weapon  &_Weapon)
{
	this->_Weapon = &_Weapon;
}