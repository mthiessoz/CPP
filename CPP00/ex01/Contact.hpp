/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:09:45 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/10 16:02:19 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <sstream>
#include <string>

class	Contact{

public :

	Contact(void);
	~ Contact(void);

	int		init_data(void);
	void	column_display(void);
	void	contact_display(void);

private :

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif