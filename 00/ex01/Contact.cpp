/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:31:06 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/16 01:30:16 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::graphs[5] = {
        "first name",
        "last name",
        "nickname",
        "phone number",
        "darkest secret"
};

Contact::Contact() {
	for (int i = 0; i < 5; ++i) {
        this->values[i] = std::string();
    }
}

Contact::~Contact() {}

bool Contact::add_info(int index) {
    this->index = index;
    for (int i = 0; i < 5; ++i) {
        std::cout << "> " << Contact::graphs[i] << ": ";
        std::getline(std::cin, this->values[i]);
    }
    for (int i = 0; i < 5; ++i) {
        if (this->values[i].length() == 0) {
            for (int i = 0; i < 5; ++i) {
                this->values[i] = std::string();
			}
            return (false);
        }
    }
    return (true);
}

void Contact::print_contact() {
    std::cout << std::right << "|" << std::setw(10) << this->index;
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "|";
        if (this->values[i].length() > 10)
            std::cout << std::right << this->values[i].substr(0,9) << '.';
        else
            std::cout << std::right << std::setw(10) << this->values[i];
    }
    std::cout << "|" << std::endl;
}

void Contact::print_full_contact() {
	if (this->values[0].length() == 0) {
		std::cout << "(⊙_⊙) invalid index" << std::endl;
		return ;
	}
	for (int i = 0; i < 5; ++i) {
		std::cout << this->graphs[i] << ": " << this->values[i] << std::endl;
	}
}

bool Contact::compare()
{
	if (this->values[0].length() > 0)
		return (true);
	return (false);
}
