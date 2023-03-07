/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:17:14 by mthiesso          #+#    #+#             */
/*   Updated: 2023/02/08 17:00:06 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include "Contact.hpp"

class	Phonebook{

public :

	Phonebook(void);
	~ Phonebook(void);

	void	add(void);
	void	search(void);

private :

	Contact	_tab[8];
	int	nb_contact;
};

#endif
