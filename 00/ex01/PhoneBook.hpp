/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:02:11 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/15 16:00:20 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int max;
		int current;

	public:
		PhoneBook();
		~PhoneBook();

		void add(void);
		void search(void);
};

#endif