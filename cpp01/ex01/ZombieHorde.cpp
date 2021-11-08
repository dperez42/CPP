/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:14:56 by daniel            #+#    #+#             */
/*   Updated: 2021/10/13 20:14:57 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name)
{
    int i;

    i = 0;
	Zombie *zombies = new Zombie[N];
	while (i < N)
    {
		zombies[i].setName(name + std::to_string(i));
        i++;
    }
    return (zombies);
}