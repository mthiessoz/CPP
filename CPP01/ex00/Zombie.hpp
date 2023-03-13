/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:27:43 by mthiesso          #+#    #+#             */
/*   Updated: 2023/03/12 17:46:34 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>

class	Zombie{

public :

	Zombie(std::string name);
	Zombie(void);
	~ Zombie(void);
	void	announce(void);

private :

	std::string	name;
};

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

#endif