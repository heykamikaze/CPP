/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:19:16 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/16 01:24:43 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(int argc, char const *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int i = 1; i < argc; ++i) {
			std::string str = argv[i];
			for (size_t i = 0; i < str.length(); ++i) {
				std::cout << (char)std::toupper(str[i]);
			}
		}
	}
	std::cout << "\n";
	return 0;
}
