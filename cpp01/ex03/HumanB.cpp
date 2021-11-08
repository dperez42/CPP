/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:13:46 by daniel            #+#    #+#             */
/*   Updated: 2021/10/13 20:13:47 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanB::HumanB ( std::string name )
{
    this->name = name;
    this->weapon = NULL;
}

void    HumanB::setWeapon( Weapon &weapon )
{
    this->weapon = &weapon;
}

std::string  HumanB::getWeapon( void ) const
{
    return (this->weapon->getType());
}

void    HumanB::setName( std::string name )
{
    this->name = name;
}

std::string  HumanB::getName( void ) const
{
    return (this->name);
}

void HumanB::attack(void)
{
	if (this->weapon == NULL)
		std::cout << this->name << " attacking without weapons" << std::endl;
	else
		std::cout << this->name << " attacking with your " << this->weapon->getType() << std::endl;
}