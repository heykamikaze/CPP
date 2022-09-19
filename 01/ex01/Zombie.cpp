/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:42:26 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/19 20:42:27 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(string name) {
	this->name = name;
}

Zombie::~Zombie() {
	cout << this->name << " FOREVER ALIVE" << endl;
}

void	Zombie::set_name(string name) {
	this->name = name;
}

void	Zombie::announce() {
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}