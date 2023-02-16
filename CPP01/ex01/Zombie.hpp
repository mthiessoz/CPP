/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:48:12 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/16 15:36:08 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>

class	Zombie{

public :

	Zombie(void);
	Zombie(std::string name);
	~ Zombie(void);
	void	announce(void);
	void	setname(std::string name);

private :

	std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif