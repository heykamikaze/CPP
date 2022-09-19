/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:38:30 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/19 20:39:36 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie_K = new Zombie("Karl");
	Zombie *zombie_F = newZombie("Friedrich");
	randomChump("Vladimir");
	zombie_K->announce();
	zombie_F->announce();
	delete(zombie_K);
	delete(zombie_F);
	return (0);
}