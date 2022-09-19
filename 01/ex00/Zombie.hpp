/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:39:20 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/19 20:39:31 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

using namespace std;
class Zombie
{
private:
		string	name;
public:
		Zombie(string name);
		~Zombie();

		void announce(void);
};

Zombie* newZombie(string name);
void randomChump(string name);

#endif