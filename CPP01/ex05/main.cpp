/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:54:25 by mthiesso          #+#    #+#             */
/*   Updated: 2023/03/12 17:43:03 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	harl.complain("debug");	
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("gruh");
	return (0);
}