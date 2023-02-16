/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:15:21 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/16 16:27:47 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "📫 adresse str : " << &str << std::endl;
	std::cout << "📫 adresse strPTR  : " << stringPTR << std::endl;
	std::cout << "📫 adresse strREF : " << &stringREF << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "💎 Valeur str : " << str << std::endl;
	std::cout << "💎 Valeur strPTR  : " << *stringPTR << std::endl;
	std::cout << "💎 Valeur strREF : " << stringREF << std::endl;


}