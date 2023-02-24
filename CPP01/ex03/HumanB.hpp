/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:15 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/24 20:48:16 by mthiesso         ###   ########.fr       */
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

	Weapon		&_weapon;
	std::string _name;
};

#endif