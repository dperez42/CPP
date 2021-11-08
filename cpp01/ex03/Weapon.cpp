/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:13:58 by daniel            #+#    #+#             */
/*   Updated: 2021/10/14 16:48:35 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{  this->_type = "\0"; }

Weapon::Weapon( std::string type )
{  this->_type = type; }

Weapon::~Weapon( void ){}
//Set
void    Weapon::setType( std::string type )
{  this->_type = type; }
//Get
std::string  Weapon::getType( void ) const
{  return (this->_type); }