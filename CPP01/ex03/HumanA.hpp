/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:35:23 by mthiesso          #+#    #+#             */
/*   Updated: 2023/03/01 00:19:49 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <sstream>
#include <string>
#include "Weapon.hpp"

class	HumanA{

public :

	HumanA(std::string name, Weapon &weapon);
	HumanA(Weapon &weapon);
	~ HumanA(void);
	void	setWeapon(Weapon  &_weapon);
	void	attack(void);
private :

	Weapon		&_weapon;
	std::string _name;
};
#endif