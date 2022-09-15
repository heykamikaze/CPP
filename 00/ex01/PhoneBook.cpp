/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:03:50 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/16 01:19:21 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->max = 8;
	this->current = 0;
}

PhoneBook::~PhoneBook() {

}

void	PhoneBook::add(void)
{
	if (this->current == this->max)
		this->current = 0;
	if (!(this->contacts[this->current].add_info(this->current)))
	{
		std::cout << "Empty field detected. Contact saving failed, please try again ╮( ˘ ､ ˘ )╭\n";
		return ;
	}
	this->current++;
}

void	PhoneBook::search(void)
{
	std::string str;
	std::stringstream stringstream;
	int index;

	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	for (int i = 0; i < this->max; ++i) {
		if (this->contacts[i].compare()) {
			this->contacts[i].print_contact();
		}
	}
	std::cout << "index of the contact to show: ";
	std::getline(std::cin, str);
	for (size_t i = 0; i < str.length(); ++i) {
		if (!isdigit(str[i])) {
			std::cout << "(⊙_⊙) invalid index" << std::endl;
			return ; 
		}
	}
	stringstream << str;
	stringstream >> index;
	if (index < 0 || index >= this->max)
	{
		std::cout << "(⊙_⊙) invalid index" << std::endl;
		return ; 
	}
	this->contacts[index].print_full_contact();
}