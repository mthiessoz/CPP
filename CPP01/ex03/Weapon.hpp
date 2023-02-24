/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:38 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/24 18:36:59 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <sstream>
#include <string>

class	Weapon{

public :

	Weapon(std::string type);
	Weapon(void);
	~ Weapon(void);
	std::string	getType();
	void	setType(std::string type);

private :

	std::string	_Type;

};

#endif