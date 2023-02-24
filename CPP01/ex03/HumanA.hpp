/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:35:23 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/24 21:09:08 by mthiesso         ###   ########.fr       */
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
	void	setWeapon(Weapon  &_weapon);
	void	attack(void);

	HumanA(void);
	~ HumanA(void);
private :

	Weapon		&_weapon;
	std::string _name;
};
#endif