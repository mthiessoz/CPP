/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:41:31 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/14 17:20:23 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int	main()
{
	Zombie	zombie = Zombie("Foo");
	Zombie	*z = newZombie("Boo");

	zombie.announce();
	z->announce();
	randomChump("Gruh");

	delete z;
	return 0;
}