/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:09 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/16 01:40:41 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	cmd;

	while (getline(std::cin, cmd) && cmd != "EXIT")
	{
		if (cmd == "ADD")
			book.add();
		else if (cmd == "SEARCH")
			book.search();
		else if (cmd == "EXIT")
			break;
		else
			std::cout <<  "oops, incorrect command. ( ╯°□°)╯ ADD, SEARCH or EXIT are only command accepted\n";
	}
	return (0);
}