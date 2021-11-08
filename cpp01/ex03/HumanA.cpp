/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:13:17 by daniel            #+#    #+#             */
/*   Updated: 2021/10/13 20:13:22 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : name(name), weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}

void    HumanA::setWeapon( Weapon &weapon )
{ 
    this->weapon = weapon;
}

std::string  HumanA::getWeapon( void ) const
{
    return (this->weapon.getType());
}

void    HumanA::setName( std::string name )
{
    this->name = name;
}

std::string  HumanA::getName( void ) const
{
    return (this->name);
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacking with your " << this->weapon.getType() << std::endl;
}