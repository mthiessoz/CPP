/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:15 by mthiesso          #+#    #+#             */
/*   Updated: 2023/03/01 10:43:18 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <sstream>
#include <string>
#include "Weapon.hpp"

class	HumanB{

public :

	HumanB(std::string name);
	~ HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon  &_weapon);

private :

	Weapon		*_weapon;
	std::string _name;
};

#endif