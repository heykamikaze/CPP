/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:39:43 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/19 20:39:43 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	size = 10;
	Zombie *hord = zombieHorde(size, "Communist ");

	for (int i = 0; i < size; i++)
	{
		hord[i].announce();
	}
	delete[] (hord);
	return (0);
}