/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenjami <nbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:42:31 by nbenjami          #+#    #+#             */
/*   Updated: 2022/09/19 20:42:32 by nbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Zombie
{
private:
		string	name;
public:
		Zombie();
		Zombie(string name);
		~Zombie();

		void	set_name(string name);
		void	announce(void);
};

Zombie*	zombieHorde(int N, string name);

#endif