/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:15:05 by daniel            #+#    #+#             */
/*   Updated: 2021/10/13 20:15:06 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip> 
#include "Zombie.hpp"

// Constructor.
Zombie::Zombie(void)
{
    this->_zombie_name = "unnamed";
}
Zombie::Zombie(std::string name)
{
    this->_zombie_name = name;
}

// Destructor:
Zombie::~Zombie(void) 
{
	std::cout << "The zombie: " << this->_zombie_name << " died... " << std::endl;
}

// SET=============================================================

// GET=============================================================

// FUNCTIONS =============================================================================

void	Zombie::announce()
{
    std::cout << this->_zombie_name << " BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}