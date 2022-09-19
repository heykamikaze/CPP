/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:43:10 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/19 20:43:10 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	string	str("HI THIS IS BRAIN");
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << "stringADR:  " << &str << endl;
	cout << "stringPTR:  " << stringPTR << endl;
	cout << "stringREF:  " << &stringREF << endl;

	cout << "value:  " << str << endl;
	cout << "value:  " <<  *stringPTR << endl;
	cout << "value:  " <<  stringREF << endl;
	return (0);
}