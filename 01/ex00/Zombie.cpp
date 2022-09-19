/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:38:51 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/19 20:39:32 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	cout << this->name << ": FOREVER ALIVE" << endl;
}

void	Zombie::announce()
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}